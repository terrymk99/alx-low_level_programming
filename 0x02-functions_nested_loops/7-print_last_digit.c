#include "main.h"

/**
 * print_last_digit - entry point
 * @n: n is the integer to compute
 * Description: prints a number's last digit
 * Return: integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
