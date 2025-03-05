#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string
 *
 * Return: The converted integer or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0; /* Use unsigned int to avoid overflow */

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num > 214748364 || (num == 214748364 && s[i] > '7')) /* Check for INT_MAX overflow */
			{
				return (sign == 1 ? 2147483647 : -2147483648);
			}
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0) /* Stop conversion once a number is found and non-digit appears */
			break;

		i++;
	}
	return (num * sign);
}

