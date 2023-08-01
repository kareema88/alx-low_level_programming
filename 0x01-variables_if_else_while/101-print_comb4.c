#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int k;
	int d;
	int p;

	k = 0;
	while (k <= 7)
	{
		d = k + 1;
		while (d <= 8)
		{
			p = d + 1;
			while (p <= 9)
			{
				putchar(k + 48);
				putchar(d + 48);
				putchar(p + 48);
				if (k < 7 || d < 8 || p < 9)
				{
					putchar(',');
					putchar(' ');
				}
				p++;
			}
			d++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
