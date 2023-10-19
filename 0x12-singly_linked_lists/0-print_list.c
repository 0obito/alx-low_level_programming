#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 *
 * @h: pointer to the head node.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	int s_len = 10;
	char *null_s = "[0] (nil)\n";

	if (h == NULL)
		return (-1);
	do {

	if (h->str == NULL)
		write(1, null_s, s_len);
	else
	{
		write(1, "[", 1);
		print_number(h->len);
		write(1, "] ", 3);
		write(1, h->str, h->len);
		write(1, "\n", 1);
	}

	count++;
	h = h->next;

	} while (h != NULL);

	return (count);
}

/**
 * print_number - prints a number.
 *
 * @len: the number to print.
 */
void print_number(unsigned int len)
{

	if (len / 10 != 0)
		print_number(len / 10);

	_putchar(len % 10 + '0');
}

/**
 * _putchar - writes a character.
 *
 * @c: the character.
 *
 * Return: number of characters written.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
