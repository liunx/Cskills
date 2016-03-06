#
# Makefile
#

CROSS_COMPILE	=
CC 		= $(CROSS_COMPILE)gcc
LD 		= $(CROSS_COMPILE)gcc
CCFLAGS 	= -g -Wall 
LDFLAGS 	= -lm -ldl
OBJS		= main.o global_vars.o static_vars.o

all: global_vars

global_vars: $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

main.o: main.c
	$(CC) $(CCFLAGS) -c $<

global_vars.o: global_vars.c
	$(CC) $(CCFLAGS) -c $<

static_vars.o: static_vars.c
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -rf $(OBJS)
	rm -rf global_vars
