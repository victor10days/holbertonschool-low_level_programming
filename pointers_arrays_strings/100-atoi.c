#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string
 *
 * Return: The converted integer or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, found_digit = 0;

	while (s[i] != '\0')
	{
		/* Handle sign changes */
		if (s[i] == '-')
			sign *= -1;

		/* If it's a digit, process the number */
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			found_digit = 1;
		}
		/* Stop conversion if a number has been found and a non-digit appears */
		else if (found_digit)
			break;
		i++;
	}
	return (num * sign);
}

