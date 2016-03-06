/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[10];
	char *p = str;

	printf("sizeof(str) == %d\n", sizeof(str));
	printf("sizeof(p) == %d\n", sizeof(p));
	return 0;
}
