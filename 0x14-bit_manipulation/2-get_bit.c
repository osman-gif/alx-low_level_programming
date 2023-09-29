#include "main.h"

/**
 * get_bit - Return value of a bit at given index
 * @n: An integer number
 * @index: Index at which the bit value will be returned
 * Return: Returns 1 on success -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmpbit;
	int i;
	
	i = index;
	tmpbit = (unsigned long int)1 << i;

	return (tmpbit & n?1:0);
}
