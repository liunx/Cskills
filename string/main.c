/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s = "AAA";
	printf("%s\n", s);
	s[1] = 'B';
	printf("%s\n", s);

	return 0;
}
