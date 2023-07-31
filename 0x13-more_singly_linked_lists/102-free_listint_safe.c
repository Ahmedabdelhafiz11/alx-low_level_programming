#include "lists.h"

/**
 * free_listint_safe - frees safely a linked list
 * @h: pointer to first node in a linked list
 *
 * Return: number of elements in a freed list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t element = 0;
	int s;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		s = *h - (*h)->next;
		if (s > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			element++;
		}
		else
		{
			free(*h);
			*h = NULL;
			element++;
			break;
		}
	}

	*h = NULL;

	return (element);
}
