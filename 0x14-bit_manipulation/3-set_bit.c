#include "main.h"

/**
 * set_bit - Sets a value of a bit of a number at given bit index to 1
 * @n: Pointer to the number
 * @index: Index of the bit
 * Return: Returns 1 on success 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num, num1;

	if (index == 0)
		num = 1;
	else
		num = 1 << index;
	num1 = *n;

	*n = num | *n;

	num = 1 >> index;

	if (num1 == *n)
		return(-1);
	else
		return (1);

}
