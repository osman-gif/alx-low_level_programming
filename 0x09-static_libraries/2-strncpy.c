#include "main.h"

/**
 * _strncpy - copies as string pointed to by src to dest
 * @dest: points to the destination string
 * @src: points to the string that will be copied
 * @n: size of the portion of the src
 * Return: destinaton string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

return (dest);
}
