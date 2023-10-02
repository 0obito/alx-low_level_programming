#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints the first string on the command line.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return(0);
}
