#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to first element in a linked list
 *
 * Return: data inside elements that was deleted, or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
