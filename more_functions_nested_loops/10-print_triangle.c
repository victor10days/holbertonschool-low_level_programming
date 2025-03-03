#include "main.h"

/**
 * print_triangle - Prints a triangle using the `#` character
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print leading spaces */
		for (spaces = size - i; spaces > 0; spaces--)
			_putchar(' ');

		/* Print hashes */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

