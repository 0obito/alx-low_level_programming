#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all types.
 *
 * @format: containts formats to print.
 */
void print_all(const char * const format, ...)
{
	unsigned int huh, counter = 0, len = strlen(format);
	int i;
	float f;
	char c;
	char *str;
	va_list args;
	va_start(args, format);
	while (counter < len)
	{
		huh = 0;
		switch (format[counter])
		{
		case 'i':
			huh = 1;
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			huh = 1;
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 'c':
			huh = 1;
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 's':
			huh = 1;
			str = va_arg(args, char *);
			printf("%s", str);
			break;
		}
		counter++;
		if (counter < len && huh == 1)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
