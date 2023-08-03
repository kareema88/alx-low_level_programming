#include "main.h"

/**
 * _strlen_recursion - returns the length
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * tst - compares each character of the string.
 * @s: string
 * @k: iterator1.
 * @d: iterator2.
 * Return: .
 */
int tst(char *s, int k, int d)
{
	if (*(s + k) == *(s + d))
	{
		if (k == d || k == d + 1)
			return (1);
		return (0 + tst(s, k + 1, d - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (tst(s, 0, _strlen_recursion(s) - 1));
}
