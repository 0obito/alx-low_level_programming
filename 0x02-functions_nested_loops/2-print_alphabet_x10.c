# include "main.h"
# include <unistd.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints 10 times the alphabet in lowercase
 *
 * Return: Void (Success)
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;
while (i < 10)
{
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	alpha = 'a';
	i++;
}
}
