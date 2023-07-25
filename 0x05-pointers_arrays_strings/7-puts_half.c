#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int half, k;

	while (str[length] != '\0')
	{
		(length++);
	}
	half = (length - 1) / 2;

	for (k = (half + 1); k < length; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

