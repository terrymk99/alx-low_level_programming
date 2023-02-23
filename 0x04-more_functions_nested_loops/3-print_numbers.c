#include "main.h"

/**
 * print_numbers - prints 0 - 9 except for 2 & 4.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);

	_putchar('\n');
}
