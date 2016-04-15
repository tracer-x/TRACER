HOME=/home/jorge
TRACER=${HOME}/SvnReps/Systems/TRACER
TEST_DIR=${TRACER}/src/clpr/tests/WCET
 
compile:
	cd ${TRACER} && ant compi -Darg1="${TEST_DIR}/foo.c" -Darg2="${TEST_DIR}/foo.clpr" && ant compi -Darg1="${TEST_DIR}/foo1.c" -Darg2="${TEST_DIR}/foo1.clpr" && ant compi -Darg1="${TEST_DIR}/foo2.c" -Darg2="${TEST_DIR}/foo2.clpr" && ant compi -Darg1="${TEST_DIR}/foo3.c" -Darg2="${TEST_DIR}/foo3.clpr" && ant compi -Darg1="${TEST_DIR}/foo4.c" -Darg2="${TEST_DIR}/foo4.clpr" && ant compi -Darg1="${TEST_DIR}/foo5.c" -Darg2="${TEST_DIR}/foo5.clpr" && ant compi -Darg1="${TEST_DIR}/foo6.c" -Darg2="${TEST_DIR}/foo6.clpr" && ant compi -Darg1="${TEST_DIR}/foo7.c" -Darg2="${TEST_DIR}/foo7.clpr" && ant compi -Darg1="${TEST_DIR}/foo_bar.c" -Darg2="${TEST_DIR}/foo_bar.clpr" && ant compi -Darg1="${TEST_DIR}/bar3.c" -Darg2="${TEST_DIR}/bar3.clpr" && ant compi -Darg1="${TEST_DIR}/statemate.c" -Darg2="${TEST_DIR}/statemate.clpr" && ant compi -Darg1="${TEST_DIR}/bubblesort.c" -Darg2="${TEST_DIR}/bubblesort.clpr"

clean:
	rm -f *.ps
	rm -f *.pdf
	rm -f *.clpr
	rm -f *.clp

realclean:
	make clean && rm -f *.dot
