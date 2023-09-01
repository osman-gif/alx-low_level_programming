#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: sencond string
 * @n: number of bytes of the second string
 * Return: return a pointer
 */

char *_strncat(char *dest, char *src, int n)
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
	if (n > srclen)
		n = srclen % n;

	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
return (dest);
}
