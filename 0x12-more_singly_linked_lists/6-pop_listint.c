#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and sets the second node to the new head
 * @head: linked list
 *
 * Return: the heads nodes data
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *node;

	if (*head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	ret = node->n;
	free(node);
	return (ret);
}
