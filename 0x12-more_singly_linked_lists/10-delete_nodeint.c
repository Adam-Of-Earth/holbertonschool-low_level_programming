#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head node
 * @index: where to delete
 * Return: 1 (succes) -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	if (head == NULL)
		return (-1);
	for (current = *head; current != NULL && index > 0; index--)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current == *head)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}
	free(current);
	return (1);
}
