#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
