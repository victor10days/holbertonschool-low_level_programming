#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t value = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		value++;
	}

	return (value);
}

