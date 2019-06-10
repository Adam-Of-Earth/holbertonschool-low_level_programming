#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *next;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		for (head = ht->array[i]; head != NULL; head = next)
		{
			next = head->next;
			free(head);
		}
	}
	free(ht);
}
