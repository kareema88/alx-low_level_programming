#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @c: character
 * @s: string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
		{
		return (s + k);
		}
	}
	return ('\0');
}
