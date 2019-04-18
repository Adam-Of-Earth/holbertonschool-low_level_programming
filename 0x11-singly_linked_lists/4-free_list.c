#include "lists.h"

/**
 * free_list - frees memore of list
 * @head: linked list head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nodep = head;

	while (nodep != NULL)
	{
		head = head->next;
		free(nodep->str);
		free(nodep);
		nodep = head;
	}
}
