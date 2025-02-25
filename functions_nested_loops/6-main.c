#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test _abs function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int num;

    num = -10;
    printf("abs(%d) = %d\n", num, _abs(num));

    num = 0;
    printf("abs(%d) = %d\n", num, _abs(num));

    num = 25;
    printf("abs(%d) = %d\n", num, _abs(num));

    return (0);
}

