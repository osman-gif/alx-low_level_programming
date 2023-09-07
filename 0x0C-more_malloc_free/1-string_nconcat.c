#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatnate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to be concatenated to s1
 * Return: Return pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size = 0; s1[size] != '\0'; size++)
	{
	}

	ptr = malloc(size + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		ptr[j] = s1[j];

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		ptr[size++] = s2[i];
	}
	if (i < n)
		ptr[size] = '\0';
	if (i <= n && s2[i] != '\0')
		ptr[size] = '\0';
return (ptr);
}
