#include "lists.h"
#include <stdio.h>

/**
 * Prints all the elements of a list_t.
 *
 * @x: The list_t.
 *
 * Return: The number of nodes in x.
*/

size_t print_list(const list_t *x)
{
	size_t nodes = 0;

	while (x)
	{
		if (x->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", x->len, x->str);

		nodes++;
		x = x->next;
	}

	return (nodes);
}
