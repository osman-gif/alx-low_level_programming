#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 * @s: String
 * @: The char searched for in the string s
 * Return: pointer to the found character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *found;

	i = 0;
	found = '\0';

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
return (found);
}
