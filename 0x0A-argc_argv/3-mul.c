#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: contains the size of argv.
 * @argv: stores the strings given in command line.
 *
 * Description: prints the result of the multiplication
 * of two numbers.
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);

if (argc != 3)
{
printf("Error\n");
return (1);
}

else if (a == 0 && strcmp("argv[1]", "0") != 0)
{
printf("Error\n");
return (1);
}

else if (b == 0 && strcmp("argv[2]", "0") != 0)
{
printf("Error\n");
return (1);
}

else
{
printf("%d\n", a * b);
return (0);
}
}
