#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: Number of times the character '\' should be printed.
 *
 * Description: If n is 0 or less, the function only prints '\n'.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

