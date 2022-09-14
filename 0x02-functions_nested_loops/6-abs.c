#include "main.h"
/**
 * _abs - function that compute absolute vlue of an integer
 * @c: is the integer that will bbe use as function arg.
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

