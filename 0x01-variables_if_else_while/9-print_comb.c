#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Print numbers from 0 to 9 separated by comma and space
 *
 * Return: 0 success
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
