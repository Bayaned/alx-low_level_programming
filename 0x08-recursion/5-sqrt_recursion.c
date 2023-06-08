#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: the square root or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (tryit(i, n) == n && n != 1)
	{
		return (-1);
	}
	else
	{
		return (tryit(i, n));
	}
}
/**
 * tryit - try if it is the answer
 * @i: integer to try
 * @n: integer to get root of
 * Return: value of root
 */
int tryit(int i, int n)
{
	int j;

	if (i * i != n && i > n)
	{
		return (-1);
	}
	else if (i * i != n && i <= n)
	{
		j = tryit(i + 1, n);
		return (j + 1);
	}
	else
	{
		return (0);
	}
}
