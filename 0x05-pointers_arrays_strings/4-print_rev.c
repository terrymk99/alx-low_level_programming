#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string pointer to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
