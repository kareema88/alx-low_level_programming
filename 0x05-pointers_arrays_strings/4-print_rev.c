#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
	k++;
	}

	for (k--; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
