#include "hash_tables.h"

hash_node_t *add_node(hash_table_t *ht, hash_node_t *hn,
		unsigned long int index);

/**
 * hash_node_create - Create a hash node
 * @key: Key of the hash node
 * @value: value of the hash node
 * Return: returns the address of the hash node
 */

hash_node_t *hash_node_create(char *key, char *value)
{
	hash_node_t *hash_node;

	hash_node = malloc(sizeof(hash_node_t *));
	if (hash_node == NULL)
	{
		return (0);
	}
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;
	return (hash_node);
}

/**
 * hash_table_set - Adds and element(a hash node) to the hash_table
 * @ht: The hash table
 * @key: key of the element(hash node)
 * @value: Value of the element(hash node)
 * Return: Returns the 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;

	hash_node = hash_node_create(strdup(key), strdup(value));
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		add_node(ht, hash_node, index);
		return (1);
	}

	ht->array[index] = hash_node;

	return (1);
}

/**
 * add_node - Adds a new node to the begining of list
 * of the hash node linked list in case of collision
 * @ht: Pointer to the hash table
 * @hash_node: Pointer to the newly created hash node
 * which is in our case the first node in the list
 * @index: index of the array of pointers of hash_node
 * Return: Returns pointer to the hash_node
 */

hash_node_t *add_node(hash_table_t *ht, hash_node_t *hash_node,
		unsigned long int index)
{
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (hash_node);
}
