#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Compares last digit of a random number and prints the comparison
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int m;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	m = n % 10;
        if (m == 0)
                printf("Last digit of %d is %d and is 0\n", n, m);
        else if (m > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, m);
        else if (m < 6)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
        return (0);
}
