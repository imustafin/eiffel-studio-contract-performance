# eiffel-studio-contract-performance
Demo of time comparison with contracts enabled and disabled

In this repository we compare the time performance of a project
compiled with contracts enabled and disabled. Examples are compiled with
EiffelStudio 19.5

SCOOP disabled. Void checking in runtime disabled.

## Time comparison
Iterations: _200000000_

Runs of the same program: _10_

All times are in seconds

|name|avg|min|max|
|---|---|---|---|
|no_keep|0.581|0.577|0.584|
|all_enabled|6.055|6.016|6.097|
|only_target|2.673|2.648|2.707|
|only_cluster|6.497|6.036|7.47|
|all_disabled|2.895|2.805|3.291|


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
around __6.25__ seconds (the average).

The __only_target__ example effectively disables the contract checking for
the root class (enabled for the target but disables for the actual code).
Together with the __all_disabled__ example this gives us the time of around
__2.7__ (the average) seconds to run the program with contracts disabled.

So, compiling with contracts increases the time from 0.6 to 2.7 seconds =>
__4.5__ times increase.

Enabling the contracts increases the time from 2.7 to 6.25 seconds =>
further __2.31__ times increase.

## Code comparison
The finalized C code is also present in this repository
(subdirectories of `results`: `no_keep`, `all_enabled` etc.).
This is to simplify
the browsing experience for anyone interested :smile:


### all_disabled vs only_target — no difference
The produced C code differs only in the `egc_project_version` value.
All the code is otherwise the same.

Indeed, enabling contractss for the whole target and then disabling them
for all clusters (the only cluster in this example), effectively disables
contracts for the whole program.

### all_enabled vs only_cluster — no difference
Here again the only difference is the `egc_project_version`.

Enabling contracts for both the whole cluster and once again
for all its clusters
(the only cluster in this example) should have the same effect.

### no_keep vs all_disabled — the code for all assertions
Discarding assertions by omitting `-keep` during compilation will result
in all assertions-related code to be skipped during compilation to C.

The easiest to observe is the `{APPLICATION}.work` feature. We will look
at the diff of the `C3/ap124.c` file which contains the code for `APPLICATION`:
```diff
diff -u <(sed -n '73,89p' results/no_keep/C3/ap124.c) <(sed -n '100,155p' results/all_disabled/C3/ap124.c)
 void F280_2080 (EIF_REFERENCE Current)
 {
 	GTCX
+	RTEX;
+	EIF_INTEGER_32 ti4_1;
+	EIF_INTEGER_32 ti4_2;
+	RTSN;
+	RTDA;
 	RTLD;
 	
 	RTLI(1);
 	RTLR(0,Current);
 	RTLIU(1);
 	
+	RTEAA("work", 279, Current, 0, 0, 2802);
+	RTSA(Dtype(Current));
+	RTSC;
 	RTGC;
+	RTIV(Current, RTAL);
+	if ((RTAL & CK_REQUIRE) || RTAC) {
+		RTHOOK(1);
+		RTCT("x.abs <= 200", EX_PRE);
+		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
+		ti4_2 = eif_abs_int32 (ti4_1);
+		RTTE((EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 200L)), label_1);
+		RTCK;
+		RTJB;
+label_1:
+		RTCF;
+	}
+body:;
+	RTHOOK(2);
 	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
+	RTHOOK(3);
 	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > ((EIF_INTEGER_32) 200L))) {
+		RTHOOK(4);
 		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -200L);
 	}
+	if (RTAL & CK_ENSURE) {
+		RTHOOK(5);
+		RTCT("x.abs <= 200", EX_POST);
+		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
+		ti4_2 = eif_abs_int32 (ti4_1);
+		if ((EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 200L))) {
+			RTCK;
+		} else {
+			RTCF;
+		}
+	}
+	RTVI(Current, RTAL);
+	RTRS;
+	RTHOOK(6);
 	RTLE;
+	RTEE;
 }
```

We can see that going from *no_keep* to *all_disabled* mostly introduces
the contract checking code. The precondition is checked in the beginning
in `if ((RTAL & CK_REQUIRE) || RTAC) { ... }`, the postcondition is checked
in the end `if (RTAL & CK_ENSURE) { ... }`.

Even though we disable the contracts, the contracts code is added. Additionally,
many other features and classes are compiled. _TODO: explain why_

### all_disabled vs only_cluster — only _options_ change
These two examples differ only in two files.

The first file is `E1/eoption.c`.

The only difference is the line 288:
```diff
diff -u results/all_disabled/E1/eoption.c results/only_cluster/E1/eoption.c
 struct eif_opt egc_foption_init[] = {
 ...
-{0, 0, 0, {OPT_ALL, 0, NULL}},
+{63, 0, 0, {OPT_ALL, 0, NULL}},
 ...
 }
```

The array `egc_foption_init` is discussed later, you can skip directly
to [the next part](#eiffel-options-eif_opt).

#### Semantically Non-differences
This section is here for completeness sake. You may skip reading it.

The second differing file is again `C3/ap124.c`.
While the files differ, we don't see any difference in symantics.

For example, the only difference in the `work` feature is using
a temporary value to save the result of an expression (*only_cluster*)
compared to using the whole expression in full:
```diff
diff -u <(sed -n '100,155p' results/all_disabled/C3/ap124.c) <(sed -n '102,158p' results/only_cluster/C3/ap124.c)
-	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > ((EIF_INTEGER_32) 200L))) {
+	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
+	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 200L))) {
```

Similar differences occur in the `make` feature:
```diff
diff -u <(sed -n '60,91p' results/all_disabled/C3/ap124.c) <(sed -n '60,93p' results/only_cluster/C3/ap124.c)
-	loc1 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
-	(nstcall = -1, F785_5095(RTCW(loc1)));
+	tr1 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
+	(nstcall = -1, F785_5095(RTCW(tr1)));
+	loc1 = (EIF_REFERENCE) tr1;

...

-	loc2 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
-	(nstcall = -1, F785_5095(RTCW(loc2)));
+	tr1 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
+	(nstcall = -1, F785_5095(RTCW(tr1)));
+	loc2 = (EIF_REFERENCE) tr1;
```

The last difference is in the begining of the `make` feature:
```diff
diff -u <(sed -n '46,48p' results/all_disabled/C3/ap124.c) <(sed -n '46,48p' results/only_cluster/C3/ap124.c)
-	RTLR(1,Current);
-	RTLR(2,loc2);
-	RTLR(3,tr1);
+	RTLR(1,tr1);
+	RTLR(2,Current);
+	RTLR(3,loc2);
```

We should consult the definition of the `RTLR` macro in
`eif_macros.h` from Eiffel Software's Runtime:
```c
/* Macros used for local variable management:
...
 *  RTLR(x,y) register `y' on the stack at position `x'
...
 */
 
#ifdef EIF_VOLATILE
/* We do a cast to avoid a possible C compiler warnings as `y' will be of type `EIF_REFERENCE EIF_VOLATILE'. */
#define RTLR(x,y) l[x] = (EIF_REFERENCE *) &y
#else
#define RTLR(x,y) l[x] = &y
#endif
```

Where `l` seems to be a pointer to the stack.

The macro `EIF_VOLATILE` can be redefined to be either an empty define
(expands to an empty string) or to the `volatile` modifier. This seems
to be needed for exception handling because `EIF_VOLATILE` is redefined
to be `volatile` for functions having a rescue clause ([std_byte_code.e][std_byte_code_es]):

```eiffel
if rescue_clause /= Void then
    buf.put_new_line_only
    buf.put_string ("#undef EIF_VOLATILE")
    buf.put_new_line_only
    buf.put_string ("#define EIF_VOLATILE volatile")
end
```

So, the difference is only in the order of these local variables appearing
on the stack.

Overall, we see that the program code is semantically the same. The only
real difference is in the `egc_foption_init` array
[as was shown before](#all_disabled-vs-only_cluster--only-options-change).

Read further for the discussion of that difference.

## Eiffel Options: `eif_opt`
TODO: continue here



[std_byte_code_es]: https://github.com/EiffelSoftware/EiffelStudio/blob/39cebbdb398b485fc0023270e6a52716662f45eb/Src/Eiffel/eiffel/byte_code/std_byte_code.e#L417
