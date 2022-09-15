#include "main.h"
/**
 * _isdigit - checks whether is a digit ot not
 * @c: test character
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 0) && ( c <=9))
	{
		return (1);
	}
	return (0);
}

