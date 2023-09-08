#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case then upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
char ALPHA = 'A';
while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
while (ALPHA <= 'Z')
{
	putchar(ALPHA);
	ALPHA++;

}
putchar('\n');
return (0);
}
