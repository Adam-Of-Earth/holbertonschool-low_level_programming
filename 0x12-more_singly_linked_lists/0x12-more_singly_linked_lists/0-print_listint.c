#include "lists.h"
#include <stdio.h>
/**
 * listint_len - counts amount of nodes in list
 * @h: head address
 * Return: number of nodes
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
