#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: sencond string
 * Return: return a pointer
 */

char *_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;
	int i;

	destlen = 0;
	srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
return (dest);
}
