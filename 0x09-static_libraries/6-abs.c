#include "main.h"

/**
 * _abs - entry point
 * @n: Number we need its absolute value
 * Description: function that computes interger's absolute value
 * Return: number n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n = n * -1;
		return (n);
	}
}
