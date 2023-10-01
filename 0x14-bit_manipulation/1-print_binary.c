#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Number which binary representation will be printed
 */

void print_binary(unsigned long int n)
{
	int num1 = 0;
	unsigned long int tmp;


	if (n == 0)
	{
		_putchar('0');
	}
	for (num1 = 63; num1 >= 0; num1--)
	{
		tmp = n >> num1;

		if ((tmp & 1) != 0)
		{
			_putchar('1');
		}
		else if (tmp != 0)
		{
			_putchar('0');
		}
	}
}
