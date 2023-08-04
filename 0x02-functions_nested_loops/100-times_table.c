#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: number of time table
 * Return: 0 success
 */
void print_times_table(int n)

{
	int k, d, p;

	if (n <= 15 && n >= 0)
	{
		for (p = 0; p <= n; p++)
		{
			_putchar(48);
			for (d = 1; d <= n; d++)
			{
				_putchar(',');
				_putchar(' ');

				k = p * d;

				if (k <= 9)
					_putchar(' ');
				if (k <= 99)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + 48);
				}
					_putchar((k % 10) + 48);
			}
			_putchar('\n');
		}

	}
}

