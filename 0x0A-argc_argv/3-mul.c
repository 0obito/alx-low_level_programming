#include <stdio.h>
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
int mul = argv[1] * argv[2];

if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", mul);
return (0);
}
