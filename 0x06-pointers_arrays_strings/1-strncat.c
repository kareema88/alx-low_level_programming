#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0, d = 0;

	while (dest[k] != '\0')
		k++;

	while (src[d] != '\0' && d < n)
	{
		dest[k] = src[d];
		k++;
		d++;
	}
	dest[k] = '\0';
	return (dest);
}
