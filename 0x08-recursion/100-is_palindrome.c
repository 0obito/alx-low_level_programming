#include "main.h"

/**
 * is_it - Main Entry
 *
 * Description: Helpful function.
 *
 * @s: A given string.
 * @z: optional variable.
 *
 * Return: a helpful value to check with.
 */
int is_it(char *s, char z)
{
	if (*s == '\0')
		return (1);
	is_it(s + 1);
}


/**
 * is_palindrome - Main Entry
 *
 * Description: Checks if a string is a palindrome.
 *
 * @s: A given string.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

}
