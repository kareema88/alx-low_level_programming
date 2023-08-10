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
	unsigned int k;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: nembre of members
 * @size: size
 *
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == 0)
		return (NULL);

	_memset(pt, 0, size * nmemb);
	return (pt);
}
