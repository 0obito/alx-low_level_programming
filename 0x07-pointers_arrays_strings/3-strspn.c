#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 *
 * @dest: the destinated pointer
 * @src: the source pointer
 * @n: number of bytes to be copied
 *
 * Description: Copies memory area.
 *
 * Return: A pointer to the memory area s.
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
