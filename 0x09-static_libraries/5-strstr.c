#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: null or pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		k = 0;

		if (haystack[k] == needle[k])
		{
			do {

			if (needle[k + 1] == '\0')
				return (haystack);

			k++;

			}

			while (haystack[k] == needle[k]);
		}
	haystack++;
	}
	return ('\0');
}
