#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to first element in a list
 * @index: index of node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int d = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (d < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		d++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}