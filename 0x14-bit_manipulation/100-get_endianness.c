#include "main.h"

/**
 * get_endian - check endian
 * descreption: checks the endianness
 * Return: 0 if big, or 1 if little
*/
int get_endianness(void)
{
	int n = 1;
	char *endi = (char *)&n;
	if (char *endi == 1)
		return (1);
	else
		return (0);
}
