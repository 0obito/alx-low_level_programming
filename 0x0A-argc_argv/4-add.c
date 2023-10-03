#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: the size of argv.
 * @argv: the array of arguments.
 *
 * Description: adds positive numbers.
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
int i;
int j;
int counter = argc;
int sum;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < counter; i++)
{

while (*argv[i] != '\0')
{

if (!(*argv[i] >= '0' && *argv[i] <= '9'))
{
printf("Error\n");
return (1);
}

argv++;
}
}

sum = 0;

for (j = 1; j < argc; j++)
{
sum = sum + atoi(argv[j]);
}
printf("%d\n", sum);
return (0);
}
