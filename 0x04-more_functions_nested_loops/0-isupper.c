#include <stdio.h>
#include "main.h"

/**
 * _isupper - print upper case from a to z
 *
 * Return: returns 1, and 0 other wise
 */
int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

