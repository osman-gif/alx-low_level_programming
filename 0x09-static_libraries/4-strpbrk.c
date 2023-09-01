#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: char pointer
 * @accept: char pinter
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char str [100];
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				str[i] = accept[j];
			}
		}
	}
	s = str;
	return (s);
}

