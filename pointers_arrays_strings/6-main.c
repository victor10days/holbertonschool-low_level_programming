#include "main.h"
#include <stdio.h>

/**
 * main - Tests the cap_string function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "expect the best. prepare for the worst. capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	return (0);
}

