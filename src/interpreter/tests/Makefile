ANTLRDIR=../../java/antlr

view:
	./allfigs2pdf 

compile: ${TESTPRG}.c
	(cd ${ANTLRDIR}; TESTPRG=${TESTPRG} make compile )

clean:
	cd SLICING && make clean 
	cd WCET && make clean 
	cd SAFETY && make clean 
	cd TESTING && make clean 
	cd CFG && make clean 
	rm -f *.ps
	rm -f *.pdf

realclean:
	cd SLICING && make realclean 
	cd WCET && make realclean 
	cd SAFETY && make realclean 
	cd TESTING && make realclean 
	cd CFG && make realclean 
	make clean && rm -f *.dot
