#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any byte in accept
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: pointer to matching byte or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}

