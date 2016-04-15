# /* For copyright information, see olden_v1.0/COPYRIGHT */
.KEEP_STATE:

OLDENDIR = ~/olden_v1.0
RCC = $(OLDENDIR)/mcc/sparc/backend/mcc 
SRCS		= em3d.c main.c make_graph.c util.c
LIBOBJS		= call-stub.o future.o init.o migrate.o msg.o debug.o msg2.o msg3.o cache.o mem.o
RLIBOBJS		= call-stub.o future.o init.o migrate.o msg.o debug.o msg2.o msg3.o cache.o plain-mem.o
SIMLIBOBJS		= call-stub.o future.o init_sim.o migrate.o msg.o debug.o msg2sim.o msg3.o cache.o mem.o 
OBJS		= $(SRCS:%.c=%.o) args.o
ROBJS		= $(SRCS:%.c=%.r.o) args.r.o
SIMOBJS      = $(SRCS:%.c=%.sim.o)  args.o
LIBLINK		= $(LIBOBJS:%=$(OLDENDIR)/runtime/%)
RLIBLINK		= $(RLIBOBJS:%=$(OLDENDIR)/runtime/%)
SIMLIBLINK		= $(SIMLIBOBJS:%=$(OLDENDIR)/runtime/%)
INCDIRS		= /usr/include $(OLDENDIR)/runtime
NODELIBS	= 
LIBDIRS		= 
CPPFLAGS	= 

CC		= cc

CFLAGS		= 

em3d:	$(OBJS) target
	/usr/bin/cmmd-ld -g  \
	-comp $(CC) $(OBJS) $(LIBLINK) -v -o em3d   \
	 $(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

em3dsim:	$(SIMOBJS) target
	/usr/bin/cmmd-ld -g  \
	-comp $(CC) $(SIMOBJS) $(SIMLIBLINK) -v -o em3dsim   \
	 $(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

plain:	$(ROBJS) target
	/usr/bin/cmmd-ld \
	-comp $(CC) $(ROBJS) $(RLIBLINK) -v -o plainem3d   \
	$(LIBDIRS:%=-L%) $(NODELIBS:%=-l%)

args.s: args.c
	/lib/cpp -DOLDEN $(CPPFLAGS) $(INCDIRS:%=-I%) args.c | $(RCC) -f > args.s

%.s:    %.c
	/lib/cpp -DOLDEN -DFUTURES $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -n -m -k > $*.s

%.sim.s:    %.c
	/lib/cpp -DOLDEN -DCACHESIM -DFUTURES $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -cs4 -n -m -k > $*.sim.s

%.p.s:    %.c
	/lib/cpp -DOLDEN -DPLAIN -DONEONLY $(CPPFLAGS) $(INCDIRS:%=-I%) $< | $(RCC) -f > $*.p.s

%.o:	%.s
	$(CC) $(CFLAGS) -c $<

%.r.o:	%.p.s
	$(CC) $(CFLAGS) -c $< -o $*.r.o
 
target: 
	cd $(OLDENDIR)/runtime; make

clean:
	rm -f $(TARGET) $(OBJS) *~ .make.state .nse_depinfo

