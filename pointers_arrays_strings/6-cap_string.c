#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Capitalize the first letter of the string */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		/* Check if previous character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
	}
	return (str);
}

