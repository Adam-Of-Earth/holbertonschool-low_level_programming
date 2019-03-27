#include "lists.h"
#include <limits.h>

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index--)
	{
		head = head->next;
	}
	if (index != INT_MAX)
		return (NULL);
	return (head);
}
