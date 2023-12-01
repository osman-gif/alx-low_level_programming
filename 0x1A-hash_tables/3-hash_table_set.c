#include "hash_tables.h"

/**
 * hash_table_set - Adds and element to the hash_table
 * @ht: The hash table
 * @key: key of the element
 * @value: Value of the element
 * Return: Returns the 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, tmp, ascii_key;
	hash_node_t *hash_node;

	hash_node = malloc(sizeof(hash_node_t *));
	if (hash_node == NULL)
	{
		return (0);
	}
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;
	ascii_key = 5381;
	while ((tmp = *key++))
	{
		ascii_key = ascii_key * 33 + tmp;
	}
	index = ascii_key % ht->size;

	ht->array[index] = hash_node;

	return (1);
}
