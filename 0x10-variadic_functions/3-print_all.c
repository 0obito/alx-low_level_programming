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
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			huh = 1;
		}
		counter++;
		if (counter < len && huh == 1)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
