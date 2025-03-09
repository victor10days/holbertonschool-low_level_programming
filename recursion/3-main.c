#include "main.h"
#include <stdio.h>

/**
 * main - tests factorial function.
 * Return: 0
 */
int main(void)
{
	printf("%d\n", factorial(1));
	printf("%d\n", factorial(5));
	printf("%d\n", factorial(10));
	printf("%d\n", factorial(-1024));
	return (0);
}

