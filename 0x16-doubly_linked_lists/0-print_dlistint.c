#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
