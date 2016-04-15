# /* For copyright information, see olden_v1.0/COPYRIGHT */
.KEEP_STATE:

OLDENDIR = ~/olden_v1.0
RCC = $(OLDENDIR)/mcc/sparc/backend/mcc 
SRCS		= swap.c bitonic.c args.c
LIBOBJS		= call-stub.o future.o init.o migrate.o msg.o debug.o mem.o msg2.o cache.o msg3.o
RLIBOBJS		= plain.o plain2.o plain-mem.o
SIMLIBOBJS		= call-stub.o future.o init_sim.o migrate.o msg.o debug.o mem.o msg2sim.o cache.o msg3.o 
OBJS		= $(SRCS:%.c=%.o) 
ROBJS		= bitonic.r.o args.r.o
SIMOBJS = swap.sim.o bitonic.sim.o args.o
LIBLINK		= $(LIBOBJS:%=$(OLDENDIR)/runtime/%)
RLIBLINK		= $(RLIBOBJS:%=$(OLDENDIR)/runtime/%)
SIMLIBLINK		= $(SIMLIBOBJS:%=$(OLDENDIR)/runtime/%)
INCDIRS		= /usr/include $(OLDENDIR)/runtime
NODELIBS	= 
LIBDIRS		= 
CPPFLAGS	= -DNOTDUMB

CC		= cc -g

CFLAGS		= 

bisort:	$(OBJS) target
	/usr/bin/cmmd-ld \
	-comp $(CC) $(OBJS) $(LIBLINK) -v -o bisort   \
	$(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

bisortsim:	$(SIMOBJS) target
	/usr/bin/cmmd-ld \
	-comp $(CC) $(SIMOBJS) $(SIMLIBLINK) -v -o bisortsim   \
	$(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

plain:	$(ROBJS) target
	/usr/bin/cmmd-ld \
	-comp $(CC) $(ROBJS) $(RLIBLINK) -v -o plainbisort   \
	$(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

args.s: args.c
	/lib/cpp $(CPPFLAGS) $(INCDIRS:%=-I%) args.c | $(RCC) -m -k > args.s

%.s:    %.c
	/lib/cpp  -DFUTURES  $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -n -m -k > $*.s

%.sim.s:    %.c
	/lib/cpp  -DFUTURES  $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -cs4 -n -m -k > $*.sim.s

%.p.s:    %.c
	/lib/cpp -DPLAIN -DONEONLY   $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -f > $*.p.s
	
%.o:	%.s
	$(CC) $(CFLAGS) -c $<


%.r.o:	%.p.s
	$(CC) $(CFLAGS) -c $< -o $*.r.o


target: 
	cd $(OLDENDIR)/runtime; make

clean:
	rm -f $(TARGET) $(OBJS) *~ .make.state .nse_depinfo

