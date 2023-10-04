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
	size_t j = 0;
	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ptr[i] = s2[i];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
