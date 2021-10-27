# eiffel-studio-contract-performance
Demo of time comparison with contracts enabled and disabled

In this repository we compare the time performance of a project
compiled with contracts enabled and disabled. Examples are compiled with
EiffelStudio 19.5

# Time comparison
Iterations: _100000000_

Runs of the same program: _10_

All times are in seconds

|name|avg|min|max|
|---|---|---|---|
|no_keep|0.632|0.569|0.689|
|all_enabled|4.647|4.37|4.894|
|only_target|1.893|1.825|2.04|
|only_cluster|4.734|4.463|5.243|
|all_disabled|2.067|1.85|2.474|

All examples are compiled with `-finalize` option.

* __no_keep__ compiles the program without the `-keep` option.
  All other examples are compiled with `-keep`.
* __all_enabled__ has contracts enabled for both the target and the cluster
* __only_target__ has contracts enabled for the target, and disabled for the cluster
* __only_cluster__ has contracts enabled for the cluster, and disabled for the target
* __all_disabled__ has contracts disabled for both the target and the cluster

We see that removing contracts from the code gives use the benchmark
time of __0.6__ seconds on average.

The __all_enabled__ example and the __only_cluster__ examples effectively
evaluate the contracts. This gives us the time of the program with contracts at
aroudn __4.7__ seconds.

The __only_target__ example effectively disables the contract checking for
the root class (enabled for the target but disables for the actual code).
Together with the __all_disabled__ example this gives us the time of around
__2__ seconds to run the program with contracts disabled.

So, compiling with contracts increases the time from 0.6 to 2 seconds =>
__3.33__ times increase.

Enabling the contracts increases the time from 2 to 4.7 seconds =>
further __2.35__ times increase.
