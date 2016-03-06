/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	printf("p addr: %p\n", p);
	*p = 999;
	return 0;
}
