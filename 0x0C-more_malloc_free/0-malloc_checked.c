#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
