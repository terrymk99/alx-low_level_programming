#include "main.h"

/**
 * print_line - function draws a straight line using the character _
 * @n: The number of _ characters to be printed.
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
