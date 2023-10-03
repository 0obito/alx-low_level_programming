#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point.
 *
 * Description: outputs a pointer to a newly allocated space in memory.
 *
 * @str: a given copy of the string.
 *
 * Return: a pointer to the duplicated string if succesful,
 * NULL otherwise.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char dup[];

	if (str == NULL)
		return (NULL);

	dup[] = malloc(sizeof(*str));

	while (*str != '\0')
	{
		dup[i] = *str;
		i++;
		str++;
	}

	return (dup);
}
