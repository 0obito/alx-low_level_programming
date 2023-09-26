#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 *
 * @s: pointer to string
 * @accept: the sample of bytes
 *
 * Description: Gets the length of a prefix substring.
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
char *ptr;
unsigned int i = 0;

while (*s != '\0')
{
	*ptr = accpet;
	while (*ptr != '\0')
	{
		/* for loop with int j to decrease */
		if (*s == *ptr)
		{
			i++;
			break;
		}
		else
			ptr++;
	}
	s++;
	
	if (*ptr == '\0' || *s == '\0')
		return (i);

}
}
