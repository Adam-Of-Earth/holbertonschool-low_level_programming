#include "hash_tables.h"

/**
 * hash_table_print - prints out hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head, *last;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL)
			last = head;
	}
	for (i = 0; i < ht->size; i++)
	{
		for (head = ht->array[i]; head != NULL; head = head->next)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (head->next != NULL || head != last)
				printf(", ");
		}
	}
	putchar('}');
	putchar('\n');
}
