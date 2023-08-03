#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary represent of a number
 * @n: decimal num prints as binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (x = n, s = 0; (x >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
