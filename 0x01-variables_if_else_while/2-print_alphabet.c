#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: prints the alphabet in lower case
 *
 * return: always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
putchar('\n');
return (0);
}
