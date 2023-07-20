#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int k, d, p;

	for (d = 0; d < 10 ; d++)
	{
		for (p = 0; p <= 14; p++)
		{
			k = p;

			if (p > 9)
			{
			_putchar(1 + 48);
			k = p % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
