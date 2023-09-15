#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints the arguments pass to the function
 * @separator: separates the arguments printed
 * @n: first variable argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;

	va_list __attribute__((unused))args_list;

	va_start(args_list, n);

	for (i = 0; i < n;)
	{
		number = va_arg(args_list, int);
		printf("%d", number);
		i++;
		if (i < n)
			if (separator != NULL)
			{
				printf("%s", separator);
			}

	}
		printf("\n");
}
