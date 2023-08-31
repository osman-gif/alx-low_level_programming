#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
