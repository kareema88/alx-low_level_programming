#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: string
 * Return:s
 */
char *cap_string(char *s)
{
	int k, d;

	char index[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	for (k = 0; s[k] != '\0'; k++)
	{

		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
		{
		s[k] -= 32;

	for (d = 0; d < 13 ; d++)

		if (s[k] == index[d])
		{
			if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
			{
			s[k + 1] -= 32;
			}

		}
		}

	}
	return (s);
}
