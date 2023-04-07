#include <stdio.h>
/**
* main - even-valued terms Fibonacci numbers
*
* Return: nothing
*/
int main(void)
{
long int a = 1;
long int b = 2;
long int c;
long int sum = 2;
while (c < 4000000)
{
if (c % 2 == 0)
{
sum += c;
}
c = a + b;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
