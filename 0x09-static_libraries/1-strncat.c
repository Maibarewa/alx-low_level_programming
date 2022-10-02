#include "main.h"

/**
 * _strncat - string cancatination
 * @dest: sring destination
 * @src: source string
 * @n: number integat
 *
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[i] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
