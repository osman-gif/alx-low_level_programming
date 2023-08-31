#include "main.h"

/**
 * _pow_recursion - calculate a number raised to power of another number
 * @x: Inter number(actual number)
 * @y: The number that is the power
 * Return: Return the result of the calculation
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
		return (x);
	if (y >= 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (-1);
}
