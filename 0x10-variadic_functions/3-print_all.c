#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list t_type;
	const char * str;

	str = format;
	va_start(t_type, format);
	/* ceis */
	while(*(str++) != 0)
	{


		if (*str == 'c')
		{
			printf("%c\n", va_arg(t_type, int));
		}	
		if (*str == 'i')
		{
			printf("%d\n", va_arg(t_type, int));	
		}
		if (*(str) == 's')
		{
			printf("%s\n", va_arg(t_type, char*));
		}

	}
	va_end(t_type);
}


