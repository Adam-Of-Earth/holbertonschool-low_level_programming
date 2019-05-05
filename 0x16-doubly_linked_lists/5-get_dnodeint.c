#include "lists.h"

/**
 * get_dnodeint_at_index - return node at index
 * @head: head node
 * @index: location of node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	while (index > 0 && node != NULL)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		index--;
	}
	return (node);
}
