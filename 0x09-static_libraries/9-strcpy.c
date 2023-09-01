#include "main.h"

/**
 * _strcpy - copies as string pointed to by src to dest
 * @dest: points to the destination string
 * @src: points to the string that will be copied
 * Return: destinaton string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	n = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		n++;
	}
	for (i = 0; i <= n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
	}
return (dest);
}
