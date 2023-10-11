#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int a, b, cmp1, cmp2, cmp3, result;
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
	cmp1 = strcmp(argv[2], "/");
	cmp2 = strcmp(argv[2], "%");
	cmp3 = strcmp(argv[3], "0");
	if ((cmp1 == 0 && cmp3 == 0) || (cmp2 == 0 && cmp3 == 0))
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
