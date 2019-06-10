#include "hash_tables.h"

/**
 * hash_table_set - adds to hash table
 * @ht: hash table to add to
 * @key: key
 * @value: element to add
 * Return: 1 (sucsess) 0 (falure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *vcopy = NULL, *kcopy = NULL;
	hash_node_t *head = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || ht->array == NULL || ht->size < 1)
		return (0);
	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	head = calloc(1, sizeof(hash_node_t));
	if (head == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	vcopy = strdup(value);
	if (vcopy == NULL)
	{
		free(head);
		return (0);
	}
	kcopy = strdup(key);
	if (kcopy == NULL)
	{
		free(vcopy);
		free(head);
		return (0);
	}
	head->value = vcopy;
	head->key = kcopy;
	head->next = NULL;
	add_node(ht, head, idx, key);
	return (1);
}
/**
 * add_node - adds a node to a hashtable
 * @ht: ht to add node to
 * @head: node to add
 * @idx: index
 * @key: key to check at index
 * Return: 0 (always)
 */
int add_node(hash_table_t *ht, hash_node_t *head, int idx,
		     const char *key)
{
	hash_node_t *current;

	if (ht->array[idx] == NULL)
		ht->array[idx] = head;
	else
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = head->value;
				free(head->key);
				free(head);
				return (0);
			}
			current = current->next;
		}
		head->next = ht->array[idx];
		ht->array[idx] = head;
	}
	return (0);
}
