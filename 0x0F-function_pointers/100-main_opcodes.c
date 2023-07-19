#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	char *p = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
		i = atoi(argv[1]);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i--)
		printf("%02hhx%s", *p++, i ? " " : "\n");
	return (0);
}
