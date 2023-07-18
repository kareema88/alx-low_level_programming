#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int k = 0;
	int d;

	while (k < 10)
	{
	for (d = 97; d <= 122; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
	k++;
	}
}
