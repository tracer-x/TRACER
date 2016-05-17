###############################################################################
# Here the CLP idiom
###############################################################################
CLP_SYS=CLPR
#CLP_SYS=SWI
###############################################################################
# GPP command
###############################################################################
GPP=gpp -DCLP_SYS=${CLP_SYS}
###############################################################################
# Preprocessor options:
###############################################################################
# -DGRAPHVIZ_USE          : use machinery to generate .dot files.
##  -DSTSDOT              : output sts (state transition system) in dot format
##  -DTREEDOT             : output symbolic execution graph in dot format 
##  -DSLICESTSDOT         : output sliced sts in dot format
##  -DPRINT_SYM_GRAPH     : output symbolic execution graph in raw format
### Stats #####################################################################
# -DPROFILE               : For profiling TRACER.
#                           Add -DREDUNDANT_MARKINGS_PROFILE to also profile
#                           redundant marked constraints between sibling
#                           answers.
#### Debugging   ##############################################################
# -DDEBUG_USE	          : This option for showing debugging information on
#                           the standard user output.
# -DLOOPINV_DEBUG         : For debugging the generation of (static) loop invariants.
# -DFIXPO_DEBUG           : For debugging a fixpoint computation.
# -DFIXPO_CLEAN_DEBUG     : For debugging the cleanup of the fixpoint.
# -DPRE_DEBUG             : For debugging the PRE operation.
# -DSTORE_DEBUG           : For debugging the storage in the memo table.
# -DMARK_CONSTRAINTS_DEBUG: For debugging interpolate_constraints_path op (slicing)
# -DSUBSUMPTION_DEBUG     : For debugging the subsumed operation.
#### May improve performance ##################################################
# -DENCODE_CHILD_PARENT   : For encode/decode answers passed from child to parent.
# -DENCODE_MEMO           : For encode/decode memo table entries. 
#
# -DPIPEDUMP              : For performing dump in a slave process and restart
#                           slave's solver memory area after that.
# -DPIPEDUMP_AND_ANSWERS  : For performing dump in a slave and storing
#                           answers in another slave 
#                           (include PIPEDUMP).
# -DPIPEMEMO              : For storing memo table entries in another slave.
#                           (include PIPEDUMP_AND_ANSWERS)
##############################################################################
# -DMINMAX                : Preprocess safety prover with minmax loop
#                           Only effective with -DUNFOLD_OPT==SAFETY
##############################################################################
# -DTESTING_CREST         : Modifies MINMAX to support CREST (a concolic tester)
#
#####May help interpolation ##################################################
# -DCONVERT_EQ_TO_INEQ    : convert equalities to inequalities from
#                           whenever projection is called. This may
#                           produce weaker interpolants
##############################################################################
OPTIONS=-DMINMAX -DUSEWP -DPROFILE  
###############################################################################
# Pick one among these:
###############################################################################
# -DUNFOLD_OPT=WCET          : Generate wcet analyzer.
# -DUNFOLD_OPT=SLICING       : Generate program slicer.
# -DUNFOLD_OPT=LIVE          : Generate a program live variable analyzer.
# -DUNFOLD_OPT=SAFETY        : Generate a safety prover.
# -DUNFOLD_OPT=TESTING       : Generate a tester.
###############################################################################
GPPOPT_WCET=-DUNFOLD_OPT=WCET       ${OPTIONS}
GPPOPT_SLICING=-DUNFOLD_OPT=SLICING ${OPTIONS}
GPPOPT_LIVE=-DUNFOLD_OPT=LIVE ${OPTIONS}
GPPOPT_SAFETY=-DUNFOLD_OPT=SAFETY   ${OPTIONS}
GPPOPT_TESTING=-DUNFOLD_OPT=TESTING ${OPTIONS}
###############################################################################
# Here the main file for safety
SAFETY=safety
# Here the main file for slicing
SLICING=slicer
# Here the main file for live
LIVE=live
# Here the main file for WCET
WCET=wcet
# Here the main file for tester (obsolete)
TESTING=tester
###############################################################################
all: slicer wcet safety tester 

slicer:
	@echo "Generating source code for slicing ...\n"
	${GPP} ${GPPOPT_SLICING} -o ${SLICING}.clp -P tracer.clp.gpp
	@echo "\n"
live:
	@echo "Generating source code for live variable analysis ...\n"
	${GPP} ${GPPOPT_LIVE} -o ${LIVE}.clp -P tracer.clp.gpp
	@echo "\n"
wcet:
	@echo "Generating source code for bounds analysis ...\n"
	${GPP} ${GPPOPT_WCET} -o ${WCET}.clp -P tracer.clp.gpp
	@echo "\n"
safety:
	@echo "Generating source code for safety ...\n"
	${GPP} ${GPPOPT_SAFETY} -o ${SAFETY}.clp -P tracer.clp.gpp
	@echo "\n"
tester:
	@echo "Generating source code for testing ...\n"
	${GPP} ${GPPOPT_TESTING} -o ${TESTING}.clp -P tracer.clp.gpp
	@echo "\n"
output:
	cd tests && make view

#-----------------------------------------------------------------------#
# Here all automatically generated files
#-----------------------------------------------------------------------#
TARGET_COMPILATION=store_t.clp check_t.clp encode.clp
TARGET_SLICING=${SLICING}.clp ${SLICING}.clp.gpp trans_in_slice.clp
TARGET_LIVE=${LIVE}.clp ${LIVE}.clp.gpp live_variable_results.log
TARGET_SAFETY=${SAFETY}.clp ${SAFETY}.clp.gpp counterexample.log
TARGET_WCET=${WCET}.clp ${WCET}.clp.gpp
TARGET_TESTING=${TESTING}.clp ${TESTING}.clp.gpp counterexample.log

TARGET=${TARGET_COMPILATION} ${TARGET_SLICING} ${TARGET_SAFETY}	\
   ${TARGET_WCET} ${TARGET_TESTING} ${TARGET_LIVE}

clean:
	rm -f ${TARGET} *~
	cd tests && make clean

realclean:
	rm -f ${TARGET}
	rm -f *.clp
	rm -f *.clpr
	cd tests && make realclean


