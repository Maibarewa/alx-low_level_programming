#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of certain number of element
 * each of an input bytes size.
 * @nmemb:
 * @size:
 *
 * Return: Null if nmemb is 0, size is 0 or function fails.
 * Poiter other wise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);
}
