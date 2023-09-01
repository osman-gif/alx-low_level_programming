#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: String pointer
 * Return: Length of the String
 */

int _strlen(char *s)
{
	char *c;
	int i;
	int len;

	len = 0;
	c = s;

	for (i = 0; c[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
