#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - entry point.
 * Description: concatenates two strings.
 * @s1: string number 1.
 * @s2: string number 2.
 * Return: pointer to the concatinated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t i = 0;
	size_t len1 = (s1 != NULL)? strlen(s1):0;
	size_t len2 = (s2 != NULL)? strlen(s2):0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	ptr = malloc(len1 + len2 + 1)

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		ptr[i] = s2[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
