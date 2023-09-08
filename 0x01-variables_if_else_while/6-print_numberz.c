#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char asc = '0';
while (num < 10)
{
	putchar('0' + num);
	num++;
}
printf("\n");
return (0);
}
