#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Input string pointer
 *
 * Return: Succes 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
