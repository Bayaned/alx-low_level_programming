#include <stdio.h>
/**
* main - Sum of even-valued terms in the Fibonacci
*
* Return: Always 0
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = 2;
	long int sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}

	printf("%ld\n", sum);

	return (0);
}
