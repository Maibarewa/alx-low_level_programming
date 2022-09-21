#include "main.h"

/**
 * _strcat - concatenate 2 string
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (s);
}

