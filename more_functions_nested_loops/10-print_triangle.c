#include "main.h"

/**
 * print_triangle - Print a triangle if '#' characters
 * @size: The size of (height) of th triangle
 *
 * Description: If size is 0 or less, print new line
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size - row; space++)
		{
			_putchar(' ');
		}

		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}
}
