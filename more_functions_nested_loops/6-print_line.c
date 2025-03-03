#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
 *
 * Description: If n is 0 or less, the function only prints '\n'.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

