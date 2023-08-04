#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination
 * @src: charachter
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];

	}
	return (dest);
}

