#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 except 2 and 4.
 *
 * Description: This function prints the digits 0 through 9,
 * except for 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}

