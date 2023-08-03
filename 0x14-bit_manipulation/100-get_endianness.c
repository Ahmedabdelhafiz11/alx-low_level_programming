#include "main.h"

/**
 * get_endianness - check endianness
 * descreption: checks the endianness
 * Return: 0 if big endianness, or 1 if little endianness
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
