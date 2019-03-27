#include <stdlib.h>
#include "lists.h"

int delete_node(listint_t **head, unsigned int index)
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
	free(curent);
	return (1);
