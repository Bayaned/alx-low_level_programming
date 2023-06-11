#include "main.h"
#include <stdio.h>
/**
 * _puts -  function that prints a string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
