#include <stdio.h>
/**
* main - program computes and prints the sum of the mult of 3 or 5 < 1024
* Return: Always 0
*/
int main(void)
{
int sum3 = 0;
int sum3 = 0;
for (int i = 3; i < 1024; i += 3)
{
sum3 = sum3 + i;
}
for (int j = 5; j < 1024; j += 5)
{
sum5 = sum5 + j;
}
int sum = sum3 + sum5;
printf("%d\n", sum);
return (0);
}
