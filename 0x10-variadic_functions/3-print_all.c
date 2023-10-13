#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - as it says.
 *
 * @format: formats supported to print.
 */
void print_all(const char * const format, ...)
{
	va_list all;

	va_start(all, format);
	while (va_arg(format) == )
}
