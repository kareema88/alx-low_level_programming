#include "main.h"

/**
 * function - square of root of numbers
 * @k: numner1
 * @d: number2
 * Return: square root
 */
int function(int k, int d)
{
	if (d * d > k)
		return (-1);

	else if (d * d == k)
		return (d);

	else
		return (function(k, d + 1));

	return (1);
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: number
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (function(n, 1));
}
