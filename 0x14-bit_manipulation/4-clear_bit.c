#include "main.h"

/**
 * clear_bit - Sets a bit of a number to 0 at given index
 * @n: Pointer to the number which bit value will be set to 0
 * @index: The index on which the value will be set
 * Return: Return 1 on success -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num, num1;

	num = *n;
	num1 = 1 << index;

	if (index > 63)
		return (-1);

	if ((num & num1) == 0)
	{
		return (1);
	}
	else
	{
		*n = *n ^ num1;
		return (1);
	}

	if (*n > num)
		return (-1);
}

