#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - as it says.
 * @separator: pointer to the string
 * used to separate stringss from eachother.
 * @n: counter of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *temp;

	va_start(strings, n);
	for (i = 0; i < n ; i++)
	{
		temp = va_arg(strings, char *);
		printf("%s", temp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
