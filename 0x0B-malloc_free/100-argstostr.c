#include "main.h"

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: argument c
 * @av: argument v
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int k, d;
	int len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (d = 0; av[k][d]; d++)
		{
			len++;
		}
	}
		len++;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	len = 0;
	for (k = 0; k < ac ; k++)
	{
		for (d = 0; av[k][d]; d++)
		{
			str[len++] = av[k][d];
		}

		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
