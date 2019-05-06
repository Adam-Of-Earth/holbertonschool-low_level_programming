#include "lists.h"

/**
 * delete_dnodeint_at_index - delete spusific node
 * @head: head node
 * @index:location of deleated node
 *
 * Return: 1 (sucsses) -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (-1);
	i = index;
	node = *head;
	while (i > 0 && node != NULL)
	{
		node = node->next;
		i--;
	}
	if (node == NULL)
		return (-1);
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (index == 0)
		*head = node->next;
	free(node);
	return (1);
}
