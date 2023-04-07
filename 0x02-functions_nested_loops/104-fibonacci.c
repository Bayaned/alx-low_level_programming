#include <stdio.h>
/**
* main - 98 Fibonacci numbers
*
* Return:nothing
*/
int main(void)
{
	float a = 1;
	float b = 2;
	float c;
	int i = 0;

	printf("%.0f, ", a);
	printf("%.0f, ", b);

	while (i < 100)
	{
		c = a + b;
		printf("%.0f", c);

		a = b;
		b = c;
		i++;
		if (i < 100)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}

