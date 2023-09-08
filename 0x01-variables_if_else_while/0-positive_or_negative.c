#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Compares a random number and prints the comparison
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("The number is positive\n");
	if (n=0)
		printf("The number is zero\n");
	if (n<0)
		printf("The number is negative\n");

	return (0);
}
