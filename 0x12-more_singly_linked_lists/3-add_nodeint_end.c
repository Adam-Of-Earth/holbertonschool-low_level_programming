#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: head node
 * @n: int to put in
 * Return: new node (sucsess) NULL (fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (last);
}
