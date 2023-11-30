#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{	
	hash_table_t *hash_table =(hash_table_t*) calloc(1,sizeof(hash_table_t));

	hash_table->size = size;
	hash_table->array = calloc(size,sizeof(hash_node_t*));
	return hash_table;
}
