#include "main.h"

/**
 * *_strchr - Locates characters
 * @s: The string
 * @c:
 *
 * Return: return the characters
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		else
		{
			i++;
		}
	}
	return ('0');
}
