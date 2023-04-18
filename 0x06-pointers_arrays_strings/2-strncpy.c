#include "main.h"
/**
 * _strncpy - function like strncpy
 * @dest: string
 * @src: string to append
 * @n: number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
	}
	dest[j] = '\0';
	return (dest);
}
