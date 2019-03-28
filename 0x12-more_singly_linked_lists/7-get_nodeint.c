#include "lists.h"
#include <limits.h>

/**
 * get_nodeint_at_index - finds node at index
 * @index: what node to return
 * @head: head node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index--)
	{
		head = head->next;
	}
	if (index != INT_MAX)
		return (NULL);
	return (head);
}
