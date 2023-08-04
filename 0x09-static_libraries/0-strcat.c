#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destinatin of string
 * @src: source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int k = 0;
	int d = 0;

	while (dest[k] != '\0')
		k++;

	while (src[d] != '\0')
	{
		dest[k] = src[d];
		k++;
		d++;
	}
	dest[k] = '\0';

	return (dest);
}
