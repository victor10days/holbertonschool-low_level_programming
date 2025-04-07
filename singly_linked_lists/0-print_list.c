#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    int value = 0;

    for (; h; value++)
    {
        if (!h->str)
        {
            printf("[0] (nil)");
            h = h->next;
        }

        else
        {
            printf("[%u] %s\n", h->len, h->str);
            h = h->next;
        }
    }
    return (value);
}
