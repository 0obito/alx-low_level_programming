#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i = 0;
	char *dup;

	if (strlen(str) == 0)
		return (str);

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(char) * strlen(str) + 1);

	if (dup == NULL)
	{
		return ("ERROR");
	}

	do
	{
		dup[i] = *str;
		i++;
		str++;
	}
	while (*str != '\0');

	return (dup);
}
