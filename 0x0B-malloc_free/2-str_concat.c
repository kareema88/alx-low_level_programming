#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		len1++;
	for (k = 0; s2[k] != '\0'; k++)
		len2++;
	str = malloc(sizeof(char) * (len1 + len2) + 1);

	if (str == NULL)
		return (0);
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		str[len1 + k] = s2[k];
	return (str);
}



