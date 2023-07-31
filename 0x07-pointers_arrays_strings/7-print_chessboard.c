#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int k, d;

	for (k = 0; k < 8; k++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[k][d]);
		}
		_putchar ('\n');
	}
}

