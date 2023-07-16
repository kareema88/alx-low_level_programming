#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int k = 122;

	while (k >= 97)
	{
	putchar(k);
	k--;
	}
	putchar('\n');
	return (0);
}
