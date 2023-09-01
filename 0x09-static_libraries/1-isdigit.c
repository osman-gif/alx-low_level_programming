#include "main.h"

/**
 * _isdigit - checks for upercase letter
 * @n: integer number
 * Return: 1 if uppercase otherwise 0
 */

int _isdigit(int n)
{
	int r;

	if ((48 - n) * (57 - n) <= 0)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
