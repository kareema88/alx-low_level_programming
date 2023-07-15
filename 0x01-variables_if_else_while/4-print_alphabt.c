#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		if (k == 113 || k == 101)
		{
			k++;
			continue;
		}
	putchar(k);
	k++;
	}
	putchar('\n');
	return (0);
}
