require 'nokogiri'
require 'file_utils'

PRJ = 'eiffel-studio-contract-timing'
ECF = "#{PRJ}.ecf"

ASSERTIONS = %i[
  precondition
  postcondition
  check
  invariant
  loop
  supplier_precondition
].freeze

# Direct child of node, created if absent
def child(node, name)
  result = node.at_xpath("./xmlns:#{name}")
  result = node.add_child("<#{name}>").first unless result

  result
end

# Set Assertions setting for the XML node,
# creating the <assertions> node if not present
def set_assertions(node, settings)
  option = child(node, 'option')
  assertions = child(option, 'assertions')

  settings.each do |setting, value|
    assertions[setting.to_s] = value.to_s
  end
end

def all_disabled
  ASSERTIONS.to_h { |x| [x, false] }
end

def all_enabled
  all_disabled.transform_values { |v| true }
end

RUNS = 10

$iters = nil

def run_example(doc, name, keep)
  ecf_name = "#{name}.ecf"
  File.write(ecf_name, doc.to_xml)

  cmd = <<-CMD.gsub("\n", ' ').gsub(/\s+/, ' ').strip
      ec
        -config #{ecf_name}
        -clean
        -c_compile
        -finalize
        #{keep ? '-keep' : ''}
        >&2
  CMD

  puts cmd

  compiled = system(cmd)

  raise 'Could not compile' unless compiled

  FileUtils.rm_rf(name)
  f_code = "EIFGENs/#{PRJ}/F_code"
  FileUtils.copy_entry(f_code, name)

  runs = []
  ans = {
    cmd: cmd,
    name: name,
    runs: runs
  }

  RUNS.times do |run|
    output = `#{f_code}/#{PRJ}`
    num = output.strip.split.first.to_f

    iters_new = output.strip.split[-2]
    $iters = iters_new unless $iters
    if $iters != iters_new
      raise "Different iters: was #{$iters}, now #{iters_new}"
    end

    runs << num
    puts "#{name} run #{run}: #{num}"
  end

  ans[:avg] = runs.sum / runs.count
  ans[:min] = runs.min
  ans[:max] = runs.max

  ans
end


def patch_doc(doc, target, cluster)
  targets = doc.xpath('//xmlns:target')
  targets.each do |t|
    set_assertions(t, target ? all_enabled : all_disabled)
  end

  clusters = doc.xpath('//xmlns:cluster')
  clusters.each do |c|
    set_assertions(c, cluster ? all_enabled : all_disabled)
  end
end

examples = [
  {
    name: 'no_keep',
    keep: false,
    prep: ->(doc) { doc }
  },
  {
    name: 'all_enabled',
    keep: true,
    prep: ->(doc) { patch_doc(doc, true, true) }
  },
  {
    name: 'only_target',
    keep: true,
    prep: ->(doc) { patch_doc(doc, true, false) }
  },
  {
    name: 'only_cluster',
    keep: true,
    prep: ->(doc) { patch_doc(doc, false, true) }
  },
  {
    name: 'all_disabled',
    keep: true,
    prep: ->(doc) { patch_doc(doc, false, false) }
  }
]

results = examples.map do |ex|
  doc = File.open(ECF) { |f| Nokogiri::XML(f) }

  ex[:prep].call(doc)

  run_example(doc, ex[:name], ex[:keep])
end

# Print results

def maybe_round(s)
  return s unless s.is_a?(Float)

  s.round(3)
end

puts "Iterations: #{$iters}"
puts "Runs: #{RUNS}"

header = %i[name avg min max]
puts '|' + header.join('|') + '|'
puts '|' + header.map { '---' }.join('|') + '|'
results.each do |res|
  puts '|' + header.map { |i| maybe_round(res[i]) }.join('|') + '|'
end
