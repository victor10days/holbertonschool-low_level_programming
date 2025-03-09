#include "main.h"
#include <stdio.h>

/**
 * main - tests _sqrt_recursion function.
 * Return: 0
 */
int main(void)
{
	printf("%d\n", _sqrt_recursion(1));
	printf("%d\n", _sqrt_recursion(1024));
	printf("%d\n", _sqrt_recursion(16));
	printf("%d\n", _sqrt_recursion(17));
	printf("%d\n", _sqrt_recursion(25));
	printf("%d\n", _sqrt_recursion(-1));
	return (0);
}

