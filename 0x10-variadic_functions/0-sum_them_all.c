#include <stdarg.h>
/**
 * sum_them_all - sums the arguments
 * @n: last fixed argument
 * @...: variable arguments
 * Return: sum of the variable arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list arg_list;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}
	return (sum);
}
