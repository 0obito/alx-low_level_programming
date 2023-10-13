#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    unsigned int counter = 0;
    unsigned int huh;
    int i;
    float f;
    char c;
    char *str;
    size_t format_len = strlen(format);
    va_list args;
    va_start(args, format);
    while (counter < format_len)
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
                f = va_arg(args, double); // Use double instead of float for va_arg
                printf("%f", f);
                break;
            case 'c':
                huh = 1;
                c = va_arg(args, int); // Use int for va_arg
                printf("%c", c);
                break;
            case 's':
                huh = 1;
                str = va_arg(args, char *);
                printf("%s", str);
                break;
        }
        counter++;

        if (counter < format_len && huh == 1)
            printf(", ");
    }
    va_end(args);
    printf("\n");
}
