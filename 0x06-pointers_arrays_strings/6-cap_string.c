#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: string
 * Return:s
 */
char *cap_string(char *s)
{
	int count = 0, k;
	int index[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
	*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
	for (k = 0; k < 13; k++)
	{
		if (*(s + count) == index[k])
		{
		if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
			*(s + (count + 1)) = *(s + (count + 1)) - 32;
		break;
		}

	}
		count++;
	}
	return (s);
}
