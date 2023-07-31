#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: string
 * @b: charachter
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
