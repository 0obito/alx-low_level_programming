#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: contains the size of argv.
 * @argv: stores the strings given in command line.
 *
 * Description: prints the first string on the command line.
 *
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%n\n", argc);
	return (0);
}
