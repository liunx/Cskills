#
# Makefile
#

CROSS_COMPILE	=
CC 		= $(CROSS_COMPILE)gcc
LD 		= $(CROSS_COMPILE)gcc
CCFLAGS 	= -g -Wall 
LDFLAGS 	= -lm -ldl
OBJS		= main.o 

all: swap_macro

swap_macro: $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

main.o: main.c
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -rf $(OBJS)
	rm -rf swap_macro
