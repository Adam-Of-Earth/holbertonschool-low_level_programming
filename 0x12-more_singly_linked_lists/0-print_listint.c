#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints contents of node
 * @h: head node
 *
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%u\n", h->n);
		h = h->next;
	}
	return (count);
}
