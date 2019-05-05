#include "lists.h"

/**
 * sum_dlistint - finds the sum of all nodes in linked list
 * @head: head node
 *
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodep;
	int sum = 0;

	if (head == NULL)
		return (0);
	nodep = head;
	while (nodep != NULL)
	{
		sum += nodep->n;
		nodep = nodep->next;
	}
	return (sum);
}
