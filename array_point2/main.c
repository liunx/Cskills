/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *ptr = (int *)(&a + 1);

	printf("%d, %d\n", *(a + 1), *(ptr - 1));
	return 0;
}
