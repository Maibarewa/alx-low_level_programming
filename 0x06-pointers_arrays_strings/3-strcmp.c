#include "main.h"

/**
 * _strcmp - compare 2 sring
 * @s1: sring
 * @s2: strmp
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while _strcmp(((*s1 != '\0') && (*s2 != '\0';)) && (*s1 == s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else 
	{
		return (*s1 - *s2);
	}
}
