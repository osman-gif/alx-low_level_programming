#include "hash_tables.h"

/**
 * free_list - Frees a hash_node_t linked list
 * @hn: The linked list to be freed
 */
void free_list(hash_node_t *hn)
{
	hash_node_t *tm;

	while (hn)
	{
		tm = hn->next;
		free(hn);
		hn = tm;
	}
}
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	index = 0;

	while (index <  ht->size)
	{

		if (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			/*free(ht->array[index]->next);*/
			/*free_list(ht->array[index]->next);*/
			free(ht->array[index]);
			index++;
		}
		else
			index++;
	}
	free(ht->array);
	free(ht);
}
