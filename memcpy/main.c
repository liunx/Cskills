/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[100];
	char *p = a + 10;
	printf("a addr: %p\n", a);
	printf("p addr: %p\n", p);
	memcpy(a, p, 50);
	return 0;
}
