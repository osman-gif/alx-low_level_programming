
#include "main.h"

/**
 * _isalpha - checks of the charachater is alphabet
 *
 * @c: int value
 * Return: return 0
 */

int _isalpha(int c)
{
	int r;

	if ((c - 65) * (c - 89) <= 0 || (c - 97) * (c - 123) <= 0)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
return (r);
}
