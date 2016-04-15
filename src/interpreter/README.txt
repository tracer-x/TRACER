Brief description of *.clp.gpp files
---------------------------------------------------------------------

- tracer: main 

- tracer_declarations: declaration of dynamic predicates and GPP pragmas
- tracer_flags: user-definable flags
- tracer_memo : define operations to lookup/store in memo table
- tracer_paths: operations to handle different implementations of 
                symbolic paths

- tracer_solver         : glue code to interact with CLP(R) solver
- tracer_solver_arrays  : array/pointer solver using mccarthy axioms
- tracer_solver_external: glue code to interact with external solvers 
                          for satisfiability check and generation of
                          interpolants. For now, only Z3

- tracer_interpolant_basic: most basic interpolation algorithm

- tracer_interpolant_others: compute interpolants based on some other
                             methods which can be used in replacement
                             of tracer_interpolant_basic or in
                             combination with it.

- tracer_interpolant_wp_disjunct: exact (disjunctive) weakest precondition                  		                    
- tracer_interpolant_wp_non_disjunct: approximate (conjunctive) weakest precondition
- tracer_interpolant_rybal: use CLP-Prover for interpolants
                            (Rybalchenko and Sofronie, VMCAI 2007)

- tracer_loops : provide support for loops by generating statically
                 loop invariants.

- tracer_abstraction: support of user abstractions
- tracer_preprocess : precompute some syntax-based information from 
                      the C program.
- tracer_pretty_printer: output debugging information
- tracer_profile       : output profiling information
- tracer_graphviz      : generate output in .dot format

- tracer_piped_operations: perform operations in other processes. It
  mitigates problems with dump/3 and also it is a mechanism to provide
  more memory to TRACER.

- tracer_encode_ground: replace logical variables with atoms. Needed
  to serialize terms when information is passed to other processes.

- balanced_trees and union_find: implementations of 234-trees and
  union-find structures.

- polyhedra: compute closure convex hulls.

VERIFICATION AND TESTING

- tracer_safety: verifier for safety properties using static loop
  invariant discovery (very efficient but it raises false negatives).

- tracer_safety_minmax: verifier for safety properties using automatic
  on-demmand unrolling (more powerful, it does not raise false
  negatives unless the solver fails to prove a claim).

- tracer_tester: tester of safety properties. It behaves quite similar
  to tracer_safety. The main two differences are: no use of loop
  invariants (bounded search) and use of narrowing when some guards
  cannot be decided. FIXME: it's incomplete. It's better probably to
  remove this code at some point since it has been replaced by
  tracer_tester_crest.

- tracer_tester_crest: concolic tester with or without safety
  properties. It runs CREST (a concolic tester) while storing the
  symbolic paths and generating interpolants in the hope of helping
  CREST telling it not to run a new path which is subsumed by a
  previous one.

PROGRAM ANALYSYS

- tracer_analysis: framework for path-sensitive program analyses
- tracer_witnesses: support witness paths (required for analyses)
- tracer_loops_fixpo: auxiliary predicates needed for computing
                      fixpoints.
- tracer_wcet  : high-level wcet analysis
- tracer_slicer: program backward slicing
- tracer_live  : live variable analysis









