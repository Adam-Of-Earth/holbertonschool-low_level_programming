#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *next;
	int i, size;

	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] != NULL)
			{
				head = ht->array[i];
				while (head != NULL)
				{
					next = head->next;
					free(head->value);
					free(head->key);
					free(head);
					head = next;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
