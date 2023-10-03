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
int k;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

for (j = 0; argv[i][j]; j++)
{

if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}

}
}

for (k = 1; k < argc; k++)
{
sum += atoi(argv[k]);
}

printf("%d\n", sum);
return (0);
}
