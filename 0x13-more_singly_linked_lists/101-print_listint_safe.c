#include "lists.h"

/**
 * print_listint_safe - prints safely a linked list
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int s;

	while (head)
	{
		s = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (s > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
