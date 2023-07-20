#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)

{
	int k, d;

	if (size <= 0)

		_putchar('\n');

	for (k = 0; k < size; k++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}

