#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strcat_both - fills the string if both
 * strings are NULL
 *
 * Return: filled string.
 */
char *strcat_both(char *str)
{
	return (str);
}

/**
 * strcat_two - fills the string if
 * string s2 is NULL
 *
 * Return: filled string.
 */
char *strcat_two(char *str, char *s1)
{
	unsigned int i;

	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}

/**
 * strcat_one - fills the string if
 * string s1 is NULL
 *
 * Return: filled string.
 */
char *strcat_one(char *str, char *s2, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		str[i] = s2[i];
	str[i] = '\0';
	return (str);
}

/**
 * strcat_none - fills the string if
 * neither of the strings is NULL
 *
 * Return: filled string.
 */
char *strcat_none(char *str, char *s1, char *s2, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	for (j = 0; j < size; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

/**
 * string_nconcat - entry point
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes to use from s2.
 * Description: concatenates two strings.
 * Return: a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *both;
	char *two;
	char *ones;
	char *onen;
	char *nonen;
	char *nones;

	if (s1 == NULL && s2 == NULL) {
		str = malloc(sizeof(*str) * 1);
		both = strcat_both(str);
		return (both);
	}
	else if (s1 == NULL || s2 == NULL) {
		if (s2 == NULL) {
			str = malloc(sizeof(*str) * (strlen(s1) + 1));
			two = strcat_two(str, s1);
			return (two);
		}
		if (s1 == NULL && n >= strlen(s2)){
			str = malloc(sizeof(*str) * (strlen(s2) + 1));
			ones = strcat_one(str, s2, strlen(s2));
			return (ones);
		}
		if (s1 == NULL && n < strlen(s2)){
			str = malloc(sizeof(*str) * (n + 1));
			onen = strcat_one(str, s2, n);
			return (onen);
		}
	}
	else {
		if (n >= strlen(s2)) {
			str = malloc(sizeof(*str) * (strlen(s1) + strlen(s2) + 1));
			nones = strcat_none(str, s1, s2, strlen(s2));
			return (nones);
		}
			str = malloc(sizeof(*str) * (strlen(s1) + n + 1));
			nonen = strcat_none(str, s1, s2, n);
			return (nonen);
	}
	str = malloc(sizeof(*str) * 1);
	str[0] = '\0';
	return (str);
}
