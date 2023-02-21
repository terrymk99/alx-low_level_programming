#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 *
 * Return:  Always 0.
 */
int main(void)
{
	printf("Fibonacci Series: ");
	printf("%lld, %lld", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
