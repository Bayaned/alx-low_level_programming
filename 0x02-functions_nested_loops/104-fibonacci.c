#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 upon success
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
