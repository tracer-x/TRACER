clean:
	rm -f *.ps
	rm -f *.pdf
	rm -f *.clpr
	rm -f *.clp
	rm -f *.CIL
	rm -f *_CIL*
	cd abstraction && make clean
	cd alias && make clean
	cd array && make clean

realclean:
	make clean && rm -f *.dot
