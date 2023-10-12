#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - as it says.
 * @separator: pointer to the string
 * used to separate numbers from eachother.
 * @n: counter of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int temp;

	if (n == 0)
		exit(98);
	va_start(numbers, n);
	for (i = 0; i < n ; i++)
	{
		temp = va_arg(numbers, int);
		printf("%d", temp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
