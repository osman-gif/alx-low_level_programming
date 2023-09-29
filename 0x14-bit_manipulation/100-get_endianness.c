#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: Returns 1 if small endianness 0 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 111;

	if (i | 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
