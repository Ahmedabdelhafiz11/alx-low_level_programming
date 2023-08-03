#include "main.h"

/**
 * get_endian - check endian
 * descreption: checks the endianness
 * Return: 0 if big, or 1 if little
*/
int get_endianness(void)
{
	unsigned int n;
	char *chars;

	n = 1;
	chars = (char *) &n;
	if (*chars)
		return (1);
	return (0);
}
