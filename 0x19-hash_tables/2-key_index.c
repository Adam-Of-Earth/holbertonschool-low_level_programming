#include "hash_tables.h"

/**
 * key_index - gets index of key
 * @key: key
 * @size: size of hash table
 * Return: index of where pair should be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
