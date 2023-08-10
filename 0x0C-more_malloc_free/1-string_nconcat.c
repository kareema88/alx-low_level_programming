#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n byte
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int k, d, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];

	for (d = 0; d < n; d++)
	{
		str[k] = s2[d];
		k++;
	}
	str[k] = '\0';

		return (str);
}
