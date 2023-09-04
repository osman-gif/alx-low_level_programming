#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies the value given string to the allocated space
 * @str: Pointer to the given string
 * Return: Pointer to the new allocated space
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	ptr = malloc(size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
}
