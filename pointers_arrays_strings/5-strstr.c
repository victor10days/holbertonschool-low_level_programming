#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to the start of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
			return (haystack + i);
	}

	return (0);
}

