#include "lists.h"

/**
 * add_node_end - passes though linkedlist and adds node at end
 * @head: head of linked list
 * @str: node to dup
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newnode, *oldnode = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (oldnode->next != NULL)
		oldnode = oldnode->next;
	oldnode->next = newnode;
	return (oldnode);
}
