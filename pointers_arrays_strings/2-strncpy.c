#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination buffer where the string is copied.
 * @src: The source string to copy.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad remaining characters with null bytes if necessary */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

