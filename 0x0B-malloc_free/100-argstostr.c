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
	int length;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length = length + strlen(av[i]);

	length = length + ac;

	ptr = (char *)malloc(length);

	if (ptr == NULL)
		return (NULL);

	ptr[0] = '\0';

	for (j = 0; j < ac; j++)
	{
		strcat(ptr, av[i]);

		if(i < ac - 1)
			strcat(ptr, "\n");
	}
	return (ptr);
}
