#include "lists.h"

/**
 * add_dnodeint - makes a new head node
 * @head: old head node
 * @n: value in node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(**head).prev = new;
	*head = new;
	return (new);
}
