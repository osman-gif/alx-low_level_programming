#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name to be printed
 * @f: pointer to a function ther recieve char pointer
 * and return nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
