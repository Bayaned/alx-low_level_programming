#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a' && alphabet <= 'z' && alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
