#include "main.h"
/**
 * leet -  function that encodes a string into 1337
 * @c: string to encode
 * Return: c
 */
char *leet(char *c)
{
	int i;
	int j;
	char tooo[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; tooo[j] != '\0'; j++)
		{
			if (c[i] == tooo[j])
			{
				c[i] = tooo[j + 1];
				break;
			}
		}
	}
	return (c);
}
