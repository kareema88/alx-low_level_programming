#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len;
	len = 0;

	if ( *s > '\0')
	{
		len = len + _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
