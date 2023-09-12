# include "main.h"
# include <unistd.h>

/**
 * print_alphabet- Entry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
}
