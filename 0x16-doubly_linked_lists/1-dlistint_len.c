#include "lists.h"

/**
 * dlistint_len - gets lent of linked list
 * @h: head node
 *
 * Return: amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
