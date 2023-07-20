#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int k = '0';

	while (k <= '9')
	{
		if (k == '2' || k  == '4')
		{
			k++;
			continue;
		}
	_putchar(k);
	k++;
	}
	_putchar('\n');

}
