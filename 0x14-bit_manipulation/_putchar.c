#include <unistd.h>

/**
 * _putchar - Prints a character on the standard output
 * @c: Character to be printed
 * Return: Always 1
 */
int _putchar(int c)
{
	return (write(2, &c, 1));
}
