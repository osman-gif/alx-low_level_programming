#include "main.h"

/**
 * flip_bits - Count how many bits of a number need to be fliped to
 * get another number
 * @n: First number which bits are to be fliped
 * @m: Second number we get when first number bits gets fliped
 * Return: Returns number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i;
	unsigned long int mask;

	count = 0;
	i = 0;
	mask = 1;

	for (; i < 64; i++)
	{
		if ((mask & n) == (mask & m))
		{

		}
		else
			count++;
		mask <<= 1;
	}
	return (count);
}
