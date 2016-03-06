/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_memory(char *p)
{
	p = (char *)malloc(100);
}

int main()
{
	char *str = NULL;
	printf("str addr: %p\n", str);
	get_memory(str);
	printf("str addr: %p\n", str);
	strcpy(str, "hello world");
	printf("%s\n", str);
	free(str);
	return 0;
}
