#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @separator: string to be printed between the strings.
 * @n: number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int k;
	char *s;

	va_start(list, n);

	for (k = 0; k < n; k++)

	{
		s = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && k < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
