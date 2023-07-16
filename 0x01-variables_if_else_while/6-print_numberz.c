#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + 48);
	}
	putchar('\n');
	return (0);
}
