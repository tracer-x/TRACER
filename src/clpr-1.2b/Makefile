# ***************************************************************
# *  CLP(R)                                                     *
# *  (c) Copyright International Business Machines Corporation  *
# *  (1989) 1991, 1992 All Rights Reserved                      *
# *  Version: 1.2b                                               *
# *  File: Makefile                                             *
# ***************************************************************
#
# RESEARCH SOFTWARE DISCLAIMER
#
#     As unestablished, research software, this program is
#     provided free of charge on an "as is" basis without
#     warranty of any kind, either expressed or implied,
#     including but not limited to implied warranties of
#     merchantability and fitness for a particular
#     purpose.  IBM does not warrant that the functions
#     contained in this program will meet the user's
#     requirements or that the operation of this program
#     will be uninterrupted or error-free.  Acceptance
#     and use of this program constitutes the user's
#     understanding that he will have no recourse to IBM
#     for any actual or consequential damages, including,
#     but not limited to, lost profits or savings,
#     arising out of the use or inability to use this
#     program.  Even if the user informs IBM of the
#     possibility of such damages, IBM expects the user
#     of this program to accept the risk of any harm
#     arising out of the use of this program, or the user
#     shall not attempt to use this program for any
#     purpose.
#
# USER AGREEMENT
#
#     BY ACCEPTANCE AND USE OF THIS EXPERIMENTAL PROGRAM
#     THE USER AGREES TO THE FOLLOWING:
#
#     a.  This program is provided for the user's
#         personal, non-commercial, experimental use and
#         the user is granted permission to copy this
#         program to the extent reasonably required for
#         such use.
#
#     b.  All title, ownership and rights to this program
#         and any copies remain with IBM, irrespective of
#         the ownership of the media on which the program
#         resides.
#
#     c.  The user is permitted to create derivative
#         works to this program.  However, all copies of
#         the program and its derivative works must
#         contain the IBM copyright notice, the
#         UNESTABLISHED SOFTWARE DISCLAIMER and this USER
#         AGREEMENT.
#
#     d.  By furnishing this program to the user, IBM
#         does NOT grant either directly or by
#         implication, estoppel, or otherwise any license
#         under any patents, patent applications,
#         trademarks, copyrights or other rights
#         belonging to IBM or to any third party, except
#         as expressly provided herein.
#
#     e.  The user understands and agrees that this
#         program and any derivative works are to be used
#         solely for experimental uses and are not to be
#         sold, distributed to a commercial organization,
#         or be commercially exploited in any manner.
#
#     f.  IBM requests that the user supply to IBM a copy
#         of any changes, enhancements, or derivative
#         works which the user may create.  The user
#         grants IBM and its subsidiaries an irrevocable,
#         nonexclusive, worldwide and royalty-free
#         license to use, execute, reproduce, display,
#         perform, prepare derivative works based upon,
#         and distribute, (INTERNALLY AND EXTERNALLY)
#         copies of any and all such materials and
#         derivative works thereof, and to sublicense
#         others to do any, some, or all of the
#         foregoing, (including supporting
#         documentation).
#
#         Copies of these modifications should be sent
#         to:
#
#               SOFTWARE @ YKTVMV.BITNET
#
#     g.  Technical data and/or commodities furnished under this agreement
#         are subject to United States export/reexport control laws and
#         regulations.  The user agrees to comply with such laws and 
#         regulations, including complying with the terms of the U.S. 
#         license authorizing IBM to furnish the technical data and/or 
#         commodities to the user.
#     
#     h.  The user agrees not to export, directly or indirectly, any technical
#         data provided by IBM or any direct product of such data to, or to the
#         nationals of, Czechoslovakia, Estonia, Hungary, Iraq, Laos, Latvia,
#         Libya, Lithuania, Mongolian Peoples Republic, North Korea, People's
#         Republic of China, Poland, Romania, Union of Soviet Socialist
#         Republics, and Vietnam.
#     
#     i.  It is a requirement that the assurance from the recipient of the
#         tech data be received by IBM prior to the disclosure or export.  It
#         need not be in the actual license/contract/or other agreement
#         setting forth the deal itself-a side letter is perfectly acceptable.
#         The executed copy of the assurance should be retained locally for
#         file purposes.  
#
##############################################################################
# To run with other third-party tools
##############################################################################
# To replace CLP(R) solver with an external solver. 
# For now, only available the Microsoft Z3 SMT solver
USE_EXTERNAL_SOLVER=0
# To compute interpolants using clp-prover (Rybalchenko's tool)
USE_CLP_PROVER=0

ifeq ($(USE_EXTERNAL_SOLVER),1)
# For now, only Z3 
	EXT_SOLVER_LIBPATH=$(realpath .)/Z3/lib
	EXT_SOLVER_INCLUDE=Z3/include
	EXT_SOLVER_DEPS= $(EXT_SOLVER_INCLUDE)/z3_api.h $(EXT_SOLVER_INCLUDE)/z3.h
	EXT_SOLVER=extern_solver.z3
endif
ifeq ($(USE_CLP_PROVER),1)
CLP_PROVER_C=clp_prover.c clp-prover/hashtable.c
CLP_PROVER_H=clp_prover.h clp-prover/hashtable.h clp-prover/debug.h
CLP_PROVER_O=clp_prover.o hashtable.o 
endif 

SHELL = /bin/sh
#CC = cc
#CC = /opt/SUNWspro/bin/cc

CC = gcc -m32 -lmcheck

#PURIFY = /usr/local/purify/purify

#CCOPT = -O2 
CCOPT = -g -DCTRACE 

# Default path to init.clpr
LIBPATH = \".\"

# Added to use gprof	
#GPROF = -pg
GPROF = 

CFLAGS = $(CCOPT) -DLIBPATH=$(LIBPATH) $(GPROF)

# NOTE for Interactive Unix 386, change to -lm -lc_s
# extra maths library for -native and -fast for solaris
CLIB = -lm

# Default binary
EXEC = clpr

##############################################################################
# Some example OPTIONS:
#
# OPTIONS = -DLINUX 
#         for Linux (only tested on x86 linux)
# OPTIONS = -DBSD
#         for Sun 3, 4, Sparcstation or Vax
# OPTIONS = -DBSD -DMIPS
#         for DecStations, 
# OPTIONS = -DSYS5 -DMIPS -DHZ=100
#         for Silicon Graphics machines
# OPTIONS = -DHP835 -DSYS5
#         for HP-9000 model 835, NOTE that -O appears to cause problems
#		  with the C compiler so it probably should not be used
# OPTIONS = -DSYS5 -DRS6000 -DAIX 
#         for IBM RS/6000 running AIX
# OPTIONS = -DAIX -DSYS5
#         for IBM-PS/2-{78}x running AIX
# OPTIONS = -DIBMRT -DAIX -DSYS5
#         for IBM-RT/PC running AIX
# OPTIONS = -DBSD -DMSDOS
#         for PC's running MSDOS with a DOS extender, has only been
#         tested with the GNU gcc (djgpp version) compiler
# OPTIONS = -DBSD -DOS2V2
#         for PC's running OS2 2.0, user contributed modifications
#         and has not been tested, also meant to be used
#		  with GNU gcc (emx version) compiler
# OPTIONS = -DSYS5 -DSOLARIS
#         for Solaris
# OPTIONS = -DBSD -Dunix -DOSX -DNO_SBRK
#         for Macintosh OS X, only tested on OS X Tiger

# Special OPTIONS:
# -DENABLE_HAT
#	allows the typing of meta functors eg. ^+, directly (default is off)
#
# use -DINIT_DEBUG to show address ranges for code, trail, solver, etc
# use -DFREE_CODE_SPACE to really free retracted code -- still needs testing
# use -DUMP_FIXED_POINT to print a double in normal (fixed-point)
#      notation when dumped. Very important, otherwise TRACER may not
#      terminate!
#
# These options are even more dangerous so please use them carefully:
# use -DFREE_PTERMS to really free pterms             -- still needs testing
# use -DCLEAR_PTERM_BUFFER to free pterm buffer       -- still needs testing
# use -DFREE_HASHBUILTINA_PTERM to free pterms        -- still needs testing
###############################################################################

OPTIONS2 = -DLINUX -DCC_CSET -DFREE_CODE_SPACE -DFREE_PTERMS		\
-DCLEAR_PTERM_BUFFER -DFREE_HASHBUILTINA_PTERM -DDUMP_FIXED_POINT
#-DCSMARK_DEBUG

ifeq ($(USE_EXTERNAL_SOLVER),1)
OPTIONS1=$(OPTIONS2) -DEXTERNAL_SOLVER
else
OPTIONS1=$(OPTIONS2)
endif

ifeq ($(USE_CLP_PROVER),1)
OPTIONS=$(OPTIONS1) -DCLP_PROVER
else
OPTIONS=$(OPTIONS1)
endif

HEADERS2 = standard.h config.h parse.h symbols.h lib.h compile.h	\
	   opcodes.h emul.h solver.h 

ifeq ($(USE_EXTERNAL_SOLVER),1)
HEADERS1=$(HEADERS2) extern_solver.h
else
HEADERS1=$(HEADERS2)
endif
ifeq ($(USE_CLP_PROVER),1)
HEADERS=$(HEADERS1) $(CLP_PROVER_H)
else
HEADERS=$(HEADERS1)
endif

SRC2 = main.c compile.c init.c scan.c parse.c table.c pio.c codegen.c	\
      emit.c arithgen.c emul.c trace.c lib.c solver.c solver.eq.c	\
      solver.ineq.c solver.btk.c solver.nlin.c dump.c debug.c index.c	\
      meta.c 

ifeq ($(USE_EXTERNAL_SOLVER),1)
SRC1=$(SRC2) $(EXT_SOLVER).c
else
SRC1=$(SRC2)
endif
ifeq ($(USE_CLP_PROVER),1)
SRC1=$(SRC2) $(CLP_PROVER_C)
else
SRC1=$(SRC2)
endif

# SRCDOS = main.c compile.c init.c scan.c parse.c table.c pio.c		\
# 	 codegen.c emit.c arithgen.c emul.c trace.c lib.c solver.c	\
# 	 s-eq.c s-ineq.c s-btk.c s-nlin.c dump.c debug.c index.c	\
# 	 meta.c clp_prover.c

OBJ2 = main.o compile.o init.o scan.o parse.o table.o pio.o codegen.o	\
       emit.o arithgen.o emul.o trace.o lib.o solver.o solver.eq.o	\
       solver.ineq.o solver.btk.o solver.nlin.o dump.o debug.o index.o	\
       meta.o 

ifeq ($(USE_EXTERNAL_SOLVER),1)
OBJ1=$(OBJ2) $(EXT_SOLVER).o
else
OBJ1=$(OBJ2)
endif
ifeq ($(USE_CLP_PROVER),1)
OBJ=$(OBJ1) $(CLP_PROVER_O)
else
OBJ=$(OBJ1)
endif

DOCS = DOC/clpr.1 DOC/manual.tex DOC/manual.bib DOC/manual.bbl \
		DOC/manual-index.tex DOC/manual.DVI DOC/manual.PS

ifeq ($(USE_EXTERNAL_SOLVER),1)
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) $(CLIB) -I		\
	$(EXT_SOLVER_INCLUDE) -L $(EXT_SOLVER_LIBPATH) -lz3-gmp	\
	-Wl,-R $(EXT_SOLVER_LIBPATH)
ifeq ($(USE_CLP_PROVER),1)
	@echo 'CLP(R), Z3, and CLP-Prover MADE '
else
	@echo 'CLP(R) and Z3 MADE '
endif 
else
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) $(CLIB) 
ifeq ($(USE_CLP_PROVER),1)
	@echo 'CLP(R) and CLP-Prover MADE'
else
	@echo 'CLP(R) MADE'
endif 
endif

#purify: $(OBJ)
#	$(PURIFY) $(CC) $(CFLAGS) -o $(EXEC) $(OBJ) $(CLIB)
#	@echo 'CLP(R) MADE'

ifeq ($(USE_EXTERNAL_SOLVER),1)
$(EXT_SOLVER).o: $(EXT_SOLVER).c 
	$(CC) $(CFLAGS) $(OPTIONS) -I $(EXT_SOLVER_INCLUDE) -L	\
	$(EXT_SOLVER_LIBPATH) -lz3-gmp -c $(EXT_SOLVER).c
endif
ifeq ($(USE_CLP_PROVER),1)
hashtable.o: 
	$(CC) -fPIC $(CFLAGS)  -Wall -O2 -c clp-prover/hashtable.c 
endif

.c.o: ; $(CC) $(CFLAGS) $(OPTIONS) -c $*.c 

clean: ; /bin/rm -f $(OBJ)

release: ; tar -chvf /tmp/clpr.tar README.NEW README MANIFEST lib	\
				Makefile Makefile.os2 Makefile.dos	\
				$(HEADERS) $(SRC) EXAMPLES $(DOCS) DOS

depend: ; gcc -MM $(SRC)

#------------ dependencies ---------------------------------------------#

scan.o : scan.c standard.h os.h config.h parse.h symbols.h 
parse.o : parse.c standard.h os.h parse.h symbols.h 
table.o : table.c standard.h os.h config.h parse.h symbols.h lib.h compile.h \
  emul.h 
pio.o : pio.c standard.h os.h config.h parse.h symbols.h lib.h compile.h emul.h 
codegen.o : codegen.c standard.h os.h config.h parse.h symbols.h lib.h compile.h \
  opcodes.h emul.h 
emit.o : emit.c standard.h os.h config.h parse.h symbols.h lib.h compile.h opcodes.h \
  emul.h 
arithgen.o : arithgen.c standard.h os.h config.h parse.h symbols.h lib.h compile.h \
  emul.h solver.h 
emul.o : emul.c standard.h os.h config.h parse.h symbols.h lib.h compile.h opcodes.h \
  emul.h solver.h 
trace.o : trace.c standard.h os.h config.h parse.h lib.h compile.h opcodes.h \
  emul.h 
ifeq ($(USE_CLP_PROVER),1)
lib.o : lib.c standard.h os.h config.h parse.h lib.h symbols.h compile.h emul.h \
  opcodes.h 
else
lib.o : lib.c standard.h os.h config.h parse.h lib.h symbols.h compile.h emul.h \
  opcodes.h clp-prover/hashtable.h
endif
solver.o : solver.c standard.h os.h config.h emul.h solver.h opcodes.h 
solver.eq.o : solver.eq.c standard.h os.h config.h emul.h solver.h 
solver.ineq.o : solver.ineq.c standard.h os.h config.h emul.h solver.h 
solver.btk.o : solver.btk.c standard.h os.h config.h emul.h solver.h 
solver.nlin.o : solver.nlin.c standard.h os.h config.h emul.h solver.h 
dump.o : dump.c standard.h os.h config.h parse.h lib.h compile.h emul.h solver.h \
  symbols.h 
debug.o : debug.c standard.h os.h config.h parse.h lib.h compile.h opcodes.h \
  emul.h solver.h 
index.o : index.c standard.h os.h config.h parse.h symbols.h lib.h compile.h \
  opcodes.h emul.h 
meta.o : meta.c standard.h os.h config.h parse.h symbols.h lib.h compile.h opcodes.h \
  emul.h solver.h
ifeq ($(USE_CLP_PROVER),1)
clp_prover.o : clp_prover.c clp_prover.h 
endif
ifeq ($(USE_EXTERNAL_SOLVER),1)
$(EXT_SOLVER).o: extern_solver.h $(EXT_SOLVER).c $(EXT_SOLVER_DEPS)
endif
