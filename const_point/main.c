/*
 * const_point.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *const p = "hello";
	char const *p2 = "1234";
	const char *p3 = NULL;
	p = "good";
	p2 = "good";
	p3 = "good";
	*p2 = 10;
	*p3 = 100;
	return 0;
}
