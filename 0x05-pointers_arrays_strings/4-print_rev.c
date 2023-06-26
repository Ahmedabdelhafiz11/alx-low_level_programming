#include "main.h"
/**
 * print_rev - Printsca string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
