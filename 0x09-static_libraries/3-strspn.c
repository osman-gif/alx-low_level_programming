#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: String pointer
 * @accept: String pointer
 * Return: Number of occurences of the accept characters in 1st segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' && s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
				count++;
		}
	}
return (count);
}
