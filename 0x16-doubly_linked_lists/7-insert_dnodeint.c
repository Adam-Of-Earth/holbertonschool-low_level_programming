#include "lists.h"

/**
 * insert_dnodeint_at_index - crates node at index
 * @h: head node
 * @idx: location of node
 * @n: value of node
 *
 * Return: addres of node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *old, *new, *previous = NULL;

	if (h == NULL)
		return (NULL);
	old = *h;
	while (idx > 0 && old != NULL)
	{
		previous = old;
		old = old->next;
		idx--;
	}
	if (idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = previous;
	new->next = old;
	if (previous == NULL)
		*h = new;
	else
		previous->next = new;
	if (old != NULL)
		old->prev = new;
	return (new);
}
