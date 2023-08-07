#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter.
 * @str: string given
 * Return: NULL if str = NULL On success,it returns a pointer to a
 * new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *ptr;
	int k;
	int len = 0;

	if (str == NULL)
		return (0);

	for (k = 0; str[k] != '\0'; k++)
		len++;

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (0);

	for (k = 0; str[k] != '\0'; k++)
		ptr[k] = str[k];

	return (ptr);
}

