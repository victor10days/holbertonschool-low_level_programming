#include "main.h"

/**
 * _sqrt - finds natural square root recursively
 * @n: number
 * @x: iterator
 *
 * Return: the square root or -1 if not natural
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square root of
 *
 * Return: square root or -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

