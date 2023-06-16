#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Print alphabet in reverse
 *
 * Return: 0 success
*/

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
