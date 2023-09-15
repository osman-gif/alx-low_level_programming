#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @n: number of strings passed as arguments
 * @separator: separates the strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *str;

	va_start(str_list, n);
	for (i = 0; i < n;)
	{
		str = va_arg(str_list, char *);
		i++;
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
}


