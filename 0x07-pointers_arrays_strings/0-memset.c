#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @: memery area to be fill
 * @b: byte to fill wikth
 * @n: space to be fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
