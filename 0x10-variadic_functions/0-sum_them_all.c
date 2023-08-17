#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all parameters function
 * @n: number
 *
 * Return: sum function or NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int k, total = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (k = 0; k < n; k++)
		total = total + va_arg(list, int);

	va_end(list);

	return (total);
}
