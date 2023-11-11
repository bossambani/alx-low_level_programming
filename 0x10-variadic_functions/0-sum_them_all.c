#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	if (n == 0)
		return (0);
	va_list args;
	va_start (args, n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
