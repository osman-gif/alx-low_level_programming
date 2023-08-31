#include "main.h"
/**
 * pal - checks if a string is a palindrome or not
 * @st: index of the first digit
 * @size: size of the string(index of last digit)
 * @s: The string to be checked
 * Return: 1 if palindrome 0 other ways
 */
int pal(int st, char *s, int size)
{

	if (st >= size)
		return (1);
	if (s[st] != s[size])
		return (0);
	else
		return (pal(++st, s, --size));
}
/**
 * size - calculate the size of a string
 * @s: string which size is to be calculated
 * Return: return the string size
 */
int size(char *s)
{
	int size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
/**
 * is_palindrome - checks a string of being a plindrome or not
 * @s: pointer to the string
 * Return: Returns 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int sizet = size(s);

	return (pal(0, s, sizet - 1));
}
