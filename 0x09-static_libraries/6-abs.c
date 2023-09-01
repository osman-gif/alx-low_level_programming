#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @i: An integer value
 * Return: 0
 */
int _abs(int i)
{
	int u;

	if (i >= 0)
	{
		u = i;
	}
	else
	{
		u = i * (-1);
	}
return (u);
}
