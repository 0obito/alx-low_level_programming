#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'A';
int num = 0;
while (num < 10)
{
	putchar('0' + num);
	num++;
}

while (alpha <= 'F')
{
	putchar(alpha);
	alpha++;
}
putchar('\n');
return (0);
}
