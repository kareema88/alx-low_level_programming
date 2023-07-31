#include "main.h"

/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: 1st string
 * @accept: 2nd string
 * Rturn: s ot NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
