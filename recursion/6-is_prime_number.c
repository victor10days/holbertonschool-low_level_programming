#include "main.h"

/**
 * check_prime - helper function to check prime number.
 * @n: number
 * @i: iterator
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: number
 *
 * Return: 1 if prime, else 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

