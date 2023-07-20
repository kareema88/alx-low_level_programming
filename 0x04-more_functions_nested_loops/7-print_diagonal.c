#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int k, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (k = 0; k <= n; k++)
		{
			for (d = 0; d <= k; d++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
}
