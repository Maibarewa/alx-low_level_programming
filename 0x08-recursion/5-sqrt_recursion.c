#include "main.h"

/**
 * _sqrt_recursion - fuction that evaluate values
 * @n: parameter
 * @i: prameter2
 * Return: return value
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_evaluate(i + 1), n);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - evaluate square
 * @n: integer
 * Return: square_reursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
	{
		return (_evaluate(i, n));
	}
}
