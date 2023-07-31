#include "lists.h"

/**
 * add_nodeint_end - adds a node at end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *temp = *head;

	endnode = malloc(sizeof(listint_t));
	if (!endnode)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = endnode;

	return (endnode);
}
