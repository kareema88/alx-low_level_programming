#include "variadic_functions.h"

/**
 * print_all - print anything.
 * @format: types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	unsigned int k = 0;
	char *s;
	va_list list;

	va_start(list, format);
	while (format && format[k] != '\0')
	{
		switch (format[k])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s)
			{
				printf("%s", s);
				break;
			}
			printf("(nil)");
			break;
		default:
			k++;
			continue;
		}
		if (format[k + 1] != '\0')
			printf(", ");

		k++;
	}
	printf("\n");
	va_end(list);
}
