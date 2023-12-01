#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in an array
 * @key: The key
 * @size: Size of the array
 * Return: Returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int tmp;
	unsigned long int ascii_key;

	ascii_key = 5381;
	while ((tmp = *key++))
	{
		ascii_key = ascii_key * 33 + tmp;
	}

	index = ascii_key % size;

	return (index);
}
