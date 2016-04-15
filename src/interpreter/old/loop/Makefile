SRC=unfold.clpr.gpp

TESTFILES=\
test-loop-1.clpr \
test-loop-2.clpr \
test-loop-3.clpr \
test-loop-4.clpr \
test-loop-5.clpr \
test-loop-6.clpr \
test-loop-7.clpr \
test-loop-8.clpr \
test-loop-9.clpr \
test-loop-10.clpr \
test-loop-11.clpr \
test-loop-12.clpr \
test-loop-13.clpr \
test-loop-14.clpr \
test-loop-15.clpr \
s3_clnt.tracer.single.function.1-unsafe.clpr \
s3_clnt.tracer.single.function.1.clpr

#GPPOPT=-DDEBUG -DPIPEDUMP -DSTEP -DPIPEDEBUG
GPPOPT=-DPIPEDUMP -DPROFILE -DDEBUG -DSTEP

UNFOLD=${SRC:.gpp=}

tests: ${UNFOLD} ${TESTFILES}
	(for f in ${TESTFILES}; \
		do \
		cat $$f ${UNFOLD} > unfold-$$f ; \
		done)

clean:
	rm -f *~
	rm -f ${UNFOLD}
	(for f in ${TESTFILES}; \
		do \
		rm -f unfold-$$f; \
		done)


${UNFOLD}: ${SRC}
	gpp ${GPPOPT} $? > $@
