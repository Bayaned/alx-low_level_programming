#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char  lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
