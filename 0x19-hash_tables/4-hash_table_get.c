#include "hash_tables.h"

/**
 * hash_table_get - retrieves a key value
 * @ht: hash table
 * @key: key
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *head = NULL;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	head = ht->array[idx];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
