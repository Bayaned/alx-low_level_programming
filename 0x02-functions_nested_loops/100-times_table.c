#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n : times to print table
 * Return: Always 0
 */
void print_times_table(int n)
{
int i, j;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int w = i * j;
if (j == 0)
{
_putchar('0');
}
else if (w <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + w);
}
else if (w <= 99 && w > 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (w / 10));
_putchar('0' + (w % 10));
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + (w / 100));
_putchar('0' + ((w / 10) % 10));
_putchar('0' + (w % 10));
}
}
_putchar('\n');
}
}
}
