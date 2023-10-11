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

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}
	if (get_op_func(argv[2][0]) == NULL)
	{
		printf("Error2\n");
		exit(99);
	}
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		printf("Error3\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);

	return (result);
}
