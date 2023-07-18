#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int k, d;
	
	for (k = 1; k <= 10; k++)
	{
	
		for (d = 97 ;d <= 122 ;d++)
	
		_putchar(d);
	}
	_putchar('\n');

}
