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
int i = 0;
printf("%ld\n", b);
while (i < 48)
{
c = a + b;
a = b;
b = c;
i++;
if (i < 48  && (c % 2) == 0)
{
printf("%ld\n", c);
}
}
return (0);
}
