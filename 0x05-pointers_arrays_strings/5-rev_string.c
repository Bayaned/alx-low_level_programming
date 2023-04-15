#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	char a;

	for (i = 0; i <= (_strlen(s) - 1) / 2; i++)
	{
		a = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = a;
	}
}
