#include "main.h"

/**
 * print_number - print an integer
 * @n: number
 * Return: 0
 */
void print_number(int n)
{
	int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	if (k / 10 != 0)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + 48);
}
