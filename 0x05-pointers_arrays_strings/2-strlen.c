#include "main.h"

/**
 * strlen - return the length of a string
 * @s: string
 * Return: lenth
 */
int _strlen(char *s)
{
	int lentgh = 0;

	while (s[lentgh] != '\0')
	{
		lentgh ++;
	}


		return (lentgh);

}
