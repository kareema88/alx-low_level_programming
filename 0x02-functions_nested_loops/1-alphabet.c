#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int k = 97;

	while (k <= 122)
	{
		_putchar(k);
		k++;
	}
		_putchar('\n');
}
