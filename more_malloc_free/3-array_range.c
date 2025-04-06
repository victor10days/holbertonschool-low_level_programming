#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    if (n >= len2)
        n = len2;

    concat = malloc(len1 + n + 1);
    if (concat == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < n; j++)
        concat[len1 + j] = s2[j];

    concat[len1 + n] = '\0';

    return concat;
}
