#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: If size <= 0, the function should print only a new line
 */
void print_triangle(int size)
{
	int k, d;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= size; k++)
		{
			for (d = 1; d <= size; d++)
			{
				if ((k + d) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
