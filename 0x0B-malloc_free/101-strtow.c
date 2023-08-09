#include "main.h"
#include <stdlib.h>

/**
 * help - number of words
 * @st: string
 * Return: number of words
 */
int help(char *st)
{
	int k;
	int d = 0;

	for (k = 0; st[k]; k++)

	{
		if (st[k] == ' ')
		{
			if (st[k + 1] != ' ' && st[k + 1] != '\0')
				d++;
		}
		else if (k == 0)
			d++;
	}
	d++;
	return (d);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	int k, c, b, m;
	int d = 0;
	int p = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	d = help(str);
	if (d == 1)
		return (NULL);
	ptr = (char **)malloc(d * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[d - 1] = NULL;
	k = 0;
	while (str[k])
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
		{
			for (c = 1; str[k + c] != ' ' && str[k + c]; c++)
				;
			c++;
			ptr[p] = (char *)malloc(c * sizeof(char));
			c--;
			if (ptr[p] == NULL)
			{
				for (b = 0; b < p; b++)
					free(ptr[b]);
				free(ptr[d - 1]);
				free(ptr);
				return (NULL);
			}
			for (m = 0; m < c; m++)
				ptr[p][m] = str[k + m];
			ptr[p][m] = '\0';
			p++;
			k = k + c;
		}
		else
			k++;
	}
	return (ptr);
}
