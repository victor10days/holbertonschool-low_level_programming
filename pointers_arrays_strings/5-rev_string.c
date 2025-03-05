#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int i, len, temp;

	/* Find the length of the string */
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* Swap characters from start and end */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

