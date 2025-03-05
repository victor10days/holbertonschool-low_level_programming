#include "main.h"

/**
 * _strcpy - Copies a string including the null byte (\0)
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination buffer `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character including the null byte */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

