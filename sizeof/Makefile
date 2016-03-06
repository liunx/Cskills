#
# Makefile
#

CROSS_COMPILE	=
CC 		= $(CROSS_COMPILE)gcc
LD 		= $(CROSS_COMPILE)gcc
CCFLAGS 	= -g -Wall 
LDFLAGS 	=
OBJS		= main.o 

all: run

run: $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

main.o: main.c
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -rf $(OBJS)
	rm -rf run
