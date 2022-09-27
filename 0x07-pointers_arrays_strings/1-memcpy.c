#include "main.h"

/**
 * *_memcpy - This copy memory area
 * @dest: Destination memory area
 * @src: memory area
 * @n: Byte from memory area to copy
 *
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

