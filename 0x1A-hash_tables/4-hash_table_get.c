#include "hash_tables.h"

/**
 * hash_table_get - Returns the value associated with the key
 * at specific index of the array of the hash table
 * @ht: The hash table pointer
 * @key: The key, the key is used to calculate the index
 * Return: Returns the value associated with the key
 * if key is not found returns NULL;
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	char *value;

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (!ht->array[index])
	{
		return (NULL);
	}
	value = ht->array[index]->value;
	return (value);
}
