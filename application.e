note
	description: "eiffel-studio-contract-timing application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			start_time, end_time: TIME
			i: INTEGER
			n: INTEGER
		do
			n := 200_000_000
			create start_time.make_now
			from
				i := 0
			until
				i >= n
			loop
				work
				i := i + 1
			end
			create end_time.make_now
			print((end_time.fine_seconds - start_time.fine_seconds).out + " sec, " + n.out + " iters%N")
		end

	x: INTEGER

	work
		require
			x.abs <= 200
		do
			x := x + 1
			if x > 200 then
				x := -200
			end
		ensure
			x.abs <= 200
		end

end
