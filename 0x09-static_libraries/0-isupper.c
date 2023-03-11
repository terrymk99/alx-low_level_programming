#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: carrier integer variable
 * Return: 1 if @c is uppercase, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
