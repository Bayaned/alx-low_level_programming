#include "main.h"
/**
 * is_prime_number - function that check prime numbers
 * @n: number to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (tryit(i, n));
	}
}
/**
 * tryit - to try
 * @i: to try
 * @n: integer I'm testing
 * Return: value
 */
int tryit(int i, int n)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	else if (n % i != 0 && i < n)
	{
		return (tryit(i + 1, n));
	}
	else
	{
		return (1);
	}
}
