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
	int i = 0;

	printf("%d, ", a);
	printf("%d, ", b);

	while (i < 48)
	{
		c = a + b;
		printf("%d, ", c);

		a = b;
		b = c;
		i++;

	}
	return (0);
}
