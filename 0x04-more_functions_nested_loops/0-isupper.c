#include "main.h"
/**
 * _isupper - checks if the characteris upper or not
 * @c: chracter to be tested
 * Return: 1 weather it is, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && ( c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

