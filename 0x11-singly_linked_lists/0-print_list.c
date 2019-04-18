#include "lists.h"

/**
 * print_list - prints the contents of a linked list
 * @h: structure of list
 * Return: amount of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] (nil)\n", 0);
		}
		h = h->next;
	}
	return (i);
}
