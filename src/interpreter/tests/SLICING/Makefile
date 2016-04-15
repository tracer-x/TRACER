DOT=dot
TARGET=	test-arrays-1.clpr_Sliced_STS.pdf \
	test-arrays-2.clpr_Sliced_STS.pdf \
	test-arrays-3.clpr_Sliced_STS.pdf \
	test-arrays-4.clpr_Sliced_STS.pdf \
	test-arrays-5.clpr_Sliced_STS.pdf \
	test-arrays-6.clpr_Sliced_STS.pdf \
	test-arrays-7.clpr_Sliced_STS.pdf

all: ${TARGET}

clean:
	rm -f *.ps
	rm -f *.pdf
	rm -f *.clpr
	rm -f *.clp

realclean:
	make clean && rm -f *.dot *.pdf

.SUFFIXES: .dot .pdf

.dot.pdf:
	${DOT} -Tpdf $< -o $@
