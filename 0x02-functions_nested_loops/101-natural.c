#include <stdio.h>
/**
* main - program computes and prints the sum of the mult of 3 or 5 < 1024
* Return: Always 0
*/
int main(void)
{
int i;
int j;
int sum3 = 0;
int sum5 = 0;
for (int i = 3; i < 1024; i += 3)
{
sum3 = sum3 + i;
}
for (int j = 5; j < 1024; j += 5)
{
sum5 = sum5 + j;
}
int sum = sum3 + sum5;
_putchar('0' + (sum / 100000));
_putchar('0' + ((sum / 10000) % 10));
_putchar('0' + ((sum / 1000) % 10));
_putchar('0' + ((sum / 100) % 10));
_putchar('0' + ((sum / 10) % 10));
_putchar('0' + (sum % 10);
_putchar('\n');
return (0);
}
