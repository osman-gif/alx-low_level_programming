#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatnates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new allocated space
 * that contains the contents of the two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr1;
	int i;
	int j;
	int k;
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		size2++;
	}
	ptr1 = malloc(size1 + size2 + 1);

	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr1[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr1[i++] = s2[j];
	}
	return (ptr1);
}

