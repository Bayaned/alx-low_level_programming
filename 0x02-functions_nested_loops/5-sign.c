#include "main.h"
/**
 * print_sign - Program for task
 * Return: 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
	{
		return (1);
		_putchar('+');
	}
else if (n < 0)
	{
		return (-1);
		_putchar('-');
else
        {
	return (0);
	_putchar('0');
	}
}
