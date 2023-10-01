#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: Returns 1 if small endianness 0 otherwise
 */
int get_endianness(void)
{
	unsigned int *uintp; /* 0x000001 0x000010 0x000100 0x001000 */
	unsigned int i = 1;  /* 00000000 00000000 00000000 00000001 */

	uintp = &i;

	if (*uintp == 1) /* 0x00000001 == 00000001? */
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
