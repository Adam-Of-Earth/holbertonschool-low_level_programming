#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bot;

	while (head != NULL)
	{
		bot = head;
		head = head->next;
		free(bot);
	}
}
