#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert nums
 * @n: first num
 * @m: second num
 * Return: num of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int count;

	d = n ^ m;
	count = 0;

	while (d)
	{
		count++;
		d &= (d - 1);
	}

	return (count);
}
