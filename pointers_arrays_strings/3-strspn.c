#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: the string to check
 * @accept: the prefix substring
 *
 * Return: number of bytes from initial segment consisting only of accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			return (i);
	}
	return (i);
}

