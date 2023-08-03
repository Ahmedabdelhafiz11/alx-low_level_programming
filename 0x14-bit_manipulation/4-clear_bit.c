#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to decimal num
 * @index: index position
 * Return: 1 if success, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (x = 1; h > 0; x *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
