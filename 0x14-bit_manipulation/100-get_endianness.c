#include "main.h"

/**
 * get_endian - check endian
 * descreption: checks the endianness
 * Return: 0 if big, or 1 if little
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
