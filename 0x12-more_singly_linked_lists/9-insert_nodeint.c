#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds a node at idx
 * @head: adress of head
 * @idx: where to put node
 * @n: value to put in new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		current = *head;
		for (idx--; idx > 0 && current != NULL; idx--)
			current = current->next;
		if (current == NULL)
			return (NULL);
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = current->next;
		current->next = new;
		return (new);
	}
}
