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

	if (s1 == NULL && s2 == NULL)
	{
		str = malloc(sizeof(*str) * 1);
		if (str == NULL)
			return (NULL);

		str[0] = '\0';
		return (str);
	}
	else if (s2 == NULL)
	{
		str = malloc(sizeof(*str) * (strlen(s1) + 1));
		if (str == NULL)
			return (NULL);

		for (i = 0; i < strlen(s1); i++)
		{
			str[i] = s1[i];
		}
		str[i] = '\0';

		return (str);
	}
	else if (s1 == NULL)
	{
		if (strlen(s2) <= n)
		{
			str = malloc(sizeof(*str) * (strlen(s2) + 1));
			if (str == NULL)
				return (NULL);

			for (i = 0; i < strlen(s2); i++)
			{
				str[i] = s2[i];
			}
			str[i] = '\0';

			return (str);
		}
		else
		{
			str = malloc(sizeof(*str) * (n + 1));
			if (str == NULL)
				return (NULL);

			for (i = 0; i < n; i++)
			{
				str[i] = s2[i];
			}
			str[i] = '\0';

			return (str);
		}
	}
	else
	{
		if (strlen(s2) <= n)
		{
			str = malloc(sizeof(*str) * (strlen(s1) + strlen(s2) + 1));
			if (str == NULL)
				return (NULL);

			for (i = 0; i < strlen(s1); i++)
			{
				str[i] = s1[i];
			}

			for (j = 0; j < strlen(s2); j++)
			{
				str[i] = s2[j];
				i++;
			}

			str[i] = '\0';

			return (str);
		}
		else
		{
			str = malloc(sizeof(*str) * (strlen(s1) + n + 1));
			if (str == NULL)
				return (NULL);

			for (i = 0; i < strlen(s1); i++)
			{
				str[i] = s1[i];
			}

			for (j = 0; j < n; j++)
			{
				str[i] = s2[j];
				i++;
			}

			str[i] = '\0';

			return (str);
		}
	}
}
