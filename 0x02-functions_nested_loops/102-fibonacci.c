#include <stdio.h>
/**
 * main - 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;

	printf("%d, ", a);
	printf("%d, ", b);

	for (int i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%d, ", c);

		a = b;
		b = c;

	}
	return (0);
}
