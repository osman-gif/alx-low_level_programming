#include "main.h"

/**
 * _puts - prints string followed be new line
 * @str: char pointer
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
