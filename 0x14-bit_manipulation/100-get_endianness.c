#include "main.h"

/**
 * get_endian - check endian
 * Return: 0 if big, or 1 if little
*/
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
