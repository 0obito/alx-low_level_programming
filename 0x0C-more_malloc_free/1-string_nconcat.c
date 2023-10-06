#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - entry point
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of first bytes to
 * use from the second string.
 *
 * Description: concatenates two strings.
 *
 * Return: a pointer to the newly allocated space in memory
 * containing the concatinated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *str;

	/* Allocating space to str in the memory */
	if (n < strlen(s2))
	{
	str = malloc(sizeof(*str) * (strlen(s1) + n + 1));
		k = n;
	}
	else
	{
	str = malloc(sizeof(*str) * (strlen(s1) + strlen(s2) + 1));
		k = strlen(s2);
	}

	/* Checking if the function fails */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < k; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);
}
