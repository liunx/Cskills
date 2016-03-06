/*
 * swap_macro.c
 */
#include <stdio.h>
#include <stdlib.h>

#define swap(x, y) \
	do { \
		x = x + y; \
		y = x - y; \
		x = x - y; \
	} while(0)


int main()
{
	int x = 10;
	int y = 99;
	printf("x = %d, y = %d\n", x, y);
	swap(x, y);
	printf("x = %d, y = %d\n", x, y);
	return 0;
}
