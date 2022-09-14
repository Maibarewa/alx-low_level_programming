#include "main.h"
/**
 * print_sign - function checks sign of  a number
 * @n: is an integer that will be used as arg. of a function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
}

