#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list of listint_t
 * @head: head of listint_t linked list
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *node2;

	node = *head;
	node2 = node;
	while (*head != NULL && node != NULL)
	{
		node2 = node;
		node = node->next;
		free(node2);
	}
	*head = NULL;
}
