#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0) /* Print only even-indexed characters */
			_putchar(str[i]);
	}
	_putchar('\n');
}

