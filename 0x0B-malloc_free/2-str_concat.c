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
	int i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	else if (s1 != NULL && s2 == NULL)
	{
		ptr == malloc(sizeof(char) * strlen(s1) + 1);
		if (ptr == NULL)
			return (NULL);
		while (*s1 != '\0')
		{
			ptr[i] = *s1;
			i++;
			s1++;
		}
		return (ptr);
	}

	else if (s1 == NULL && s2 != NULL)
	{
		ptr == malloc(sizeof(char) * strlen(s2) + 1);
		if (ptr == NULL)
			return (NULL);
		while (*s2 != '\0')
		{
			ptr[i] = *s2;
			i++;
			s2++;
		}
		return (ptr);
	}
	else
	{
		ptr == malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
		if (ptr == NULL)
			return (NULL);
		while (*s1 != '\0')
		{
			ptr[i] == *s1;
			s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			ptr[i] == *s2;
			s2++;
			i++;
		}
		return (ptr);
	}
}
