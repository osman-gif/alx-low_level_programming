
#include "main.h"

/**
 * _islower - checks if a char is lower or upper case
 * @c: int charachter
 * Return: void
 */

int _islower(int c)
{
	int min;
	int max;
	int r;

	min = 65;
	max = 89;
	if (c >= 65)
	{
		if ((min - c) * (max - c) <= 0)
		{
			r = 0;
		}
		else
		{
			r = 1;
		}
	}
	else
	{
		r = 0;
	}
return (r);
}
