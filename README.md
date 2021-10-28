# eiffel-studio-contract-performance
Demo of time comparison with contracts enabled and disabled

In this repository we compare the time performance of a project
compiled with contracts enabled and disabled. Examples are compiled with
EiffelStudio 19.5

## Time comparison
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

## Code comparison
**Disclaimer**: I'm haven't ever touched EiffelStudio's compiler before.
Moreover, I'm not very knowledgeable about the C language and its compilers.
What follows next is an outsider's interpretation of what is happening.

The finalized C code is also present in this repository
(directories `no_keep`, `all_enabled` etc.). This is to simplify
the browsing experience for anyone interested :smile:

### all_disabled vs only_target — no difference
The produced C code is the same for the *all_disabled* and *only_target*
examples! Even the compiled binaries are the same (which is expected).

Indeed, enabling contractss for the whole target and then disabling them
for all clusters (the only cluster in this example), effectively disables
contracts for the whole program.

### all_enabled vs only_cluster — no difference
These examples also produce the same code and the same binary.

Enabling contracts for both the whole cluster and once again
for all its clusters
(the only cluster in this example) should have the same effect.

### no_keep vs all_disabled — the code for all assertions
Discarding assertions by omitting `-keep` during compilation will result
in all assertions-related code to be skipped during compilation to C.

The easiest to observe is the `{APPLICATION}.work` feature. We will look
at the diff of the `C20/ap978.c` file which contains the code for `APPLICATION`:
```diff
diff -u <(sed -n '72,89p' no_keep/C20/ap978.c) <(sed -n '99,155p' all_disabled/C20/ap978.c)
 void F176_7488 (EIF_REFERENCE Current)
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
 	
+	RTEAA("work", 175, Current, 0, 0, 13753);
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

The only difference is the line 184:
```diff
diff -u all_disabled/E1/eoption.c only_cluster/E1/eoption.c
 struct eif_opt egc_foption_init[] = {
 ...
-{0, 0, 0, {OPT_ALL, 0, NULL}},
+{63, 0, 0, {OPT_ALL, 0, NULL}},
 ...
 }
```

The array `egc_foption_init` is discussed later, you can skip directly
to [the next part](#eiffel-options-eif_opt).

#### Non-differences
This section is here for completeness sake. You may skip reading it.

The second differing file is again `C20/ap978.c`.
While the files differ, we don't see any difference in symantics.

For example, the only difference in the `work` feature is using
a temporary value to save the result of an expression (*only_cluster*)
compared to using the whole expression in full:
```diff
diff -u <(sed -n '99,155p' all_disabled/C20/ap978.c) <(sed -n '99,158p' only_cluster/C20/ap978.c)
-	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > ((EIF_INTEGER_32) 200L))) {
+	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
+	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 200L))) {
```

Similar differences occur in the `make` feature:
```diff
diff -u <(sed -n '60,91p' all_disabled/C20/ap978.c) <(sed -n '60,93p' only_cluster/C20/ap978.c)
-	loc1 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
-	(nstcall = -1, F905_7629(RTCW(loc1)));
+	tr1 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
+	(nstcall = -1, F905_7629(RTCW(tr1)));
+	loc1 = (EIF_REFERENCE) tr1;

...

-	loc2 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
-	(nstcall = -1, F905_7629(RTCW(loc2)));
+	tr1 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
+	(nstcall = -1, F905_7629(RTCW(tr1)));
+	loc2 = (EIF_REFERENCE) tr1;
```

The last difference is in the begining of the `make` feature:
```diff
diff -u <(sed -n '46,48p' all_disabled/C20/ap978.c) <(sed -n '46,48p' only_cluster/C20/ap978.c)
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
