#include "main.h"

/**
 * *_strchr - Locates characters
 * @s: The string
 * @c:
 *
 * Return: return the characters
 */
ar *_strchr(char *s, char c)
{
	if (c != NULL)
	{
		*s = c;
	}
	else
	{
		*s = NULL;
	}
	return (s);
}
