#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
