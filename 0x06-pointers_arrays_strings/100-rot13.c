#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @c: string to encode
 * Return: c
 */
char *rot13(char *c)
{
	int i;
	int j;
	char rot1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; rot1[j] != '\0'; j++)
		{
			if (c[i] == rot1[j])
			{
				c[i] = rot2[j];
				break;
			}
		}
	}
	return (c);
}
