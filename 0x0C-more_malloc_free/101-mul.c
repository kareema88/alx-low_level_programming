#include "main.h"

/**
 * positive - positive numbers to check
 * @s: string
 * Return: 0 or 1
 */
int positive(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: lenth
 */
int _strlen(char *s)
{
	int lentgh = 0;

	while (s[lentgh] != '\0')
	{
		lentgh++;
	}

		return (lentgh);
}
/**
 * fault - print errors for not numbers
 */
void fault(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - program that multiplies two positive numbers
 * @ac: arguments c
 * @av: arguments v
* Return: 0 success or 98 othewise
 */
int main(int ac, char *av[])
{
	char *st1, *st2;
	int len1, len2, len, k, rest, digit1, digit2, *prod, y = 0;

	st1 = av[1], st2 = av[2];
	if (ac != 3 || !positive(st1) || !positive(st2))
		fault();
	len1 = _strlen(st1);
	len2 = _strlen(st2);
	len = len1 + len2 + 1;
	prod = malloc(sizeof(int) * len);
	if (prod == NULL)
		return (1);
	for (k = 0; k <= len1 + len2; k++)
		prod[k] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = st1[len1] - '0';
		rest = 0;
		for (len2 = _strlen(st2) - 1; len2 >= 0; len2--)
		{
			digit2 = st2[len2] - '0';
			rest = rest + prod[len1 + len2 + 1] + (digit1 * digit2);
			prod[len1 + len2 + 1] = rest % 10;
			rest /= 10;
		}
		if (rest > 0)
			prod[len1 + len2 + 1] += rest;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (prod[k])
			y = 1;
		if (y)
			_putchar(prod[k] + '0');
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}
