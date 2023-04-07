#include <stdio.h>
/**
* main - 98 Fibonacci numbers
*
* Return:nothing
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i = 0;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (i < 98)
	{
		c = a + b;
		printf("%lu", c);

		a = b;
		b = c;
		i++;
		if (i < 98)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}

