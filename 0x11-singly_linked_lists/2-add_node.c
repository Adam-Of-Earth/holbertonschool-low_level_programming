#include "lists.h"

/**
 * add_node - creates a new head node
 * @head: old head node
 * @str: node to be dup
 * Return: new head address (sucsses) NULL (failure)
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *holder;

	holder = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	(*head)->str = strdup(str);
	(*head)->next = holder;
	(*head)->len = i;
	return (*head);
}
