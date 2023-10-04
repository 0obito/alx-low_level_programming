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
	int i;
	int j;

	/* Entry checks for NULL value */
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	else if (s1 != NULL && s2 != NULL)
		ptr == malloc(strlen(s1) + strlen(s2) + 1);

	else if (s1 != NULL)
		ptr == malloc(strlen(s1) + 1);

	else
		ptr == malloc(strlen(s2) + 1);

	/* Check for inappropriate amount of size */
	if(ptr == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
	{
		*ptr == *s1;
		ptr++;
		s1++;
	}

	for (j = 0; s2 != '\0'; j++)
	{
		*ptr == *s2;
		ptr++;
		s2++;
	}
	return (ptr);
}
