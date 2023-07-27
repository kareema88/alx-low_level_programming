#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @s: string
 * Return: 0
 */
char *leet(char *s)
{
	int k, d;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (d = 0; d < 10 ; d++)
		{
			if (s[k] == a[d])
			{
				s[k] = b[d];

			}
		}
	}
	return (s);
}
