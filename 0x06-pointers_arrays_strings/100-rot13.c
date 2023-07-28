#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int k = 0;
	int d;
	char rot1[] = {"ABCDEFGHILJKMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot2[] = {"NOPQRSTUVWXYZABCDEFGHILJKMnopqrstuvwxyzabcdefghijklm"};

	while (s[k] != '\0')
	{
		for (d = 0; rot1[d] != '\0'; d++)
		{
			if (s[k] == rot1[d])
			{
				s[k] = rot2[d];
				break;
			}
		}
		k++;
	}
	return (s);
}
