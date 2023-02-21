#include "main.h"

/**
 * _islower - entry point
 * Description: checks whether a character is in lowercase
 * @c: character for comparasion
 * Return: 1 if c is lowercase,
 * 0 otherwise
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
