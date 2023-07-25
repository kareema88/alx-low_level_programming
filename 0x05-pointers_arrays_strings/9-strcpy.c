#include "main.h"

/**
 * *_strcpy - copie the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: other destination
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
