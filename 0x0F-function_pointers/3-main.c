#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - work the code
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: final result.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *opera;
	int (*operation_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opera = argv[2];
	operation_func = get_op_func(opera);

	if (operation_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = operation_func(a, b);

	printf("%d\n", result);
	return (0);
}
