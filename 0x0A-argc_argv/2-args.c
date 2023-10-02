#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: contains the size of argv.
 * @argv: stores the strings given in command line.
 *
 * Description: prints the number of arguments passed into it.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int count = 0;

while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
	return (0);
}
