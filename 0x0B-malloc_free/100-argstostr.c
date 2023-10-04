#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - entry point.
 * @ac: parameter uno.
 * @av: parameter dos.
 * Description: concatenates all the arguments of the program.
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char **ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * ac);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac - 1; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * ac);

		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			free ptr;
			return (NULL);
		}

		while (av[i][j] != '\0')
			ptr[i][j] == av[i][j];
		av[i][j] = '\n';
	}
	return (ptr);
}
