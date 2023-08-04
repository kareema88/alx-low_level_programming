#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer1
 * @accept: pointer2
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, d;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (d = 0; s[k] != accept[d]; d++)
		{
			if (accept[d] == '\0')

			return (k);

		}
	}
		return (k);
}
