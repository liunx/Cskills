/*
 * array_point.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str1[] = "abc";
	char str2[] = "abc";

	const char str3[] = "abc";
	const char str4[] = "abc";

	const char *str5 = "abc";
	const char *str6 = "abc";
	
	char *str7 = "abc";
	char *str8 = "abc";

	printf("(str1 == str2) = %d\n", (str1 == str2));
	printf("(str3 == str4) = %d\n", (str3 == str4));
	printf("(str5 == str6) = %d\n", (str5 == str6));
	printf("(str6 == str7) = %d\n", (str6 == str7));
	printf("(str7 == str8) = %d\n", (str7 == str8));

	return 0;
}
