# To compile a C program into CLP(R) model, make sure the C code is in the
# TESTDIR, and if the name of the C program is prog.c, say at the shell prompt:
#
# TESTPRG=prog make compile

TESTDIR=../../clpr/tests
#TESTDIR=../../clpr/tests/SLICING

# For Windows version of Java
LIB='antlr.jar;grammars.jar;..\..\..\lib\crystal.jar;.'

# For UN*X version of Java
#LIB='antlr.jar:grammars.jar:.'

main: Main.class

Main.class: Main.java PrologEmitter.class
	javac -Xlint -cp ${LIB} Main.java

PrologEmitter.class: PrologEmitter.java ClauseFactory.class Expression.class PAHelper.class
	javac -Xlint -cp ${LIB} PrologEmitter.java

PrologEmitter.java: PrologEmitter.g
	java -cp ${LIB} antlr.Tool PrologEmitter.g

ClauseFactory.class: ClauseFactory.java OPTIONS.class
	javac -Xlint -cp ${LIB} ClauseFactory.java

Expression.class: Expression.java
	javac -cp ${LIB} Expression.java

OPTIONS.class: OPTIONS.java
	javac -cp ${LIB} OPTIONS.java

PAHelper.class: PAHelper.java
	javac -cp ${LIB} PAHelper.java

compile: Main.class removetarget createtarget

removetarget:
	rm -f ${TESTDIR}/${TESTPRG}.clpr

createtarget: ${TESTDIR}/${TESTPRG}.clpr

.SUFFIXES: .clpr

.c.clpr:
	gcc -E $< | java -cp ${LIB} Main - $@

clean:
	rm -f *.class
	rm -f *.clpr
