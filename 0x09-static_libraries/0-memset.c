#include "main.h"

/**
 * _memset - Fills n bytes of the memory pointed to by s with constant byte b
 * @s: memory area in which src points to
 * @p: The bytes to be filled in
 * @n: Number of the first bytes that will be filled in memory pointed to by s
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char p, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = p;
	}

return (s);
}
