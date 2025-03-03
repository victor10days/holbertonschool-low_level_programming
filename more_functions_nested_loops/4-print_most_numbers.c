#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";

	char *ptr = numbers;
	while (*ptr)
		_putchar(*ptr++);
}

