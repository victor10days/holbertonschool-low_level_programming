#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	char *numbers = "0123456789\n";

	while (*numbers)
		_putchar(*numbers++);
}

