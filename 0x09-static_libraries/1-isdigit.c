#include "main.h"
/**
* _isdigit -  checks for a digit
* @c: character to check
* Return: true or false
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
