#include "main.h"

/**
 * test - recursion
 * @n: number
 * @k: itration number
 * Return: 1 if prime num , 0 if not
 */
int test(int n, int k)
{
	if (k == n - 1)
	{
		return (1);
	}
	if (n % k == 0)
	{
		return (0);
	}
	if (n % k != 0)
	{
		return (test(n, k + 1));
	}
	return (0);
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int k;

	k = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (test(n, k));
}

