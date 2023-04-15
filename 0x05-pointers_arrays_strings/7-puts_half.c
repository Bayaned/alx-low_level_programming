#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * puts_half -  function that prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str) - 1; i++)
	{
		if (i > (_strlen(str) - 1) / 2)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
