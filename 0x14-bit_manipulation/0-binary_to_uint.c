#include "main.h"
#include <stdio.h>

/**
 * _set_bit - Sets a value of a bit of a number at given bit index to 1
 * @n: Pointer to the number
 * @index: Index of the bit
 * Return: Returns 1 on success 0 on failure
 */
int _set_bit(unsigned int *n, unsigned int index)
{
	unsigned long int num, num1;

	if (index > 63)
		return (-1);
	num = 1 << index;
	num1 = *n;

	*n = num | *n;

	num = 1 >> index;

	if (num1 == *n)
		return (-1);
	else
		return (1);

}

/**
 * _clear_bit - Sets a bit of a number to 0 at given index
 * @n: Pointer to the number which bit value will be set to 0
 * @index: The index on which the value will be set
 * Return: Return 1 on success -1 on failure
 */
int _clear_bit(unsigned int *n, unsigned int index)
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

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the binary digits represented as string of chars
 * Return: Return the converted number 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i, j;

	for (j = 0; b[j]; j++)
	{
	}

	for (i = 0; b[i]; i++, --j)
	{
		if (b[i] == '1')
			_set_bit(&bin, j - 1);
		else if (b[i] == '0')
			_clear_bit(&bin, j - 1);
		else
			return (0);
	}

	return (bin);
}
