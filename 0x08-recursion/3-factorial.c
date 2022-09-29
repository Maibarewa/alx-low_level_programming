#include "main.h"

/**
 * factorial - The function return factorial of a given number
 * @n: Memory space to fill
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
