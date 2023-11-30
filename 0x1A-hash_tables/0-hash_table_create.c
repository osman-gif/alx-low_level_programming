#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array
 * Return: Returns the address of the created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hash_table;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table));

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t));

	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
