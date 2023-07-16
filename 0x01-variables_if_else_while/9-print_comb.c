#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
	putchar(k);

	if (k == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
