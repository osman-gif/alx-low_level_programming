#include "main.h"

/**
 * _isupper - checks for upercase letter
 * @n: integer number
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int n)
{
	int r;

	if ((65 - n) * (90 - n) <= 0)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}

