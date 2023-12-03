#include "hash_tables.h"

/**
 * hash_table_print - prints a hash_table
 * @ht: Hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	index = 0;
	printf("{");
	while (index < ht->size)
	{
		while (!(ht->array[index]))
		{
			index++;
		}
		if (ht->array[index])
		{
			if (index <= ht->size)
				printf("\'%s\': \'%s'", ht->array[index]->key,
						ht->array[index]->value);
		}
		if (!(ht->array[index + 1]))
			index++;
		while (!(ht->array[index]))
		{
			index++;
		}
		if (index < ht->size)
		{
			printf(", ");
		}

		if (ht->array[index])
		{
			if (index <= ht->size)
				printf("\'%s\': \'%s'", ht->array[index]->key,
						ht->array[index]->value);
		}
		if (index < ht->size)
		{
			printf(", ");
		}
		index++;
	}
	printf("}\n");
}

