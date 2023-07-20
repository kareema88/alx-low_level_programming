#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer
 *
 * Return: 0
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else

	{
		for (k = 1; k <= n ; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
