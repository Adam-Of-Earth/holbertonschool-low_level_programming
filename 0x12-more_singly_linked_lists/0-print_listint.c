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

	if (h != NULL)
	{
		for (count = 0; h != NULL; count++)
		{
			printf("%u\n", h->n);
			h = h->next;
		}
	}
	else
	{
		return (0);
	}
	return (count);
}
