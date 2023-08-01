#include <stdio.h>

/**
 * main - entry point
 * description: print all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int k, d;

	k = 0;
	while (k <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (k != d && k < d)
			{
				putchar(k + 48);
				putchar(d + 48);
				if (k != 8 || d != 9)
				{
				putchar(',');
				putchar(' ');
				}

			}
			d++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
