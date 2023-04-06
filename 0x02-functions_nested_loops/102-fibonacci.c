#include <stdio.h>
/**
 * main - 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i = 0;

	printf("%ld, ", a);
	printf("%ld, ", b);

	while (i < 48)
	{
		c = a + b;
		printf("%ld, ", c);

		a = b;
		b = c;
		i++;

	}
	printf("\n");
	return (0);
}
