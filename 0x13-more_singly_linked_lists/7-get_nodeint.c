#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in a linked list
 * @head: first node in a linked list
 * @index: index of node to return
 *
 * Return: pointer to node targeted, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *temp = head;

	while (temp && t < index)
	{
		temp = temp->next;
		t++;
	}

	return (temp ? temp : NULL);
}
