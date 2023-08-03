#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number
 * @index: index position, starting from 0
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
