#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @c:  string to capitalize
 * Return: c
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i + 1] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '.' || c[i] == '\t' || c[i] == '\n')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (c);
}
