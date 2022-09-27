#include "main.h"

/**
 * _strpbrk - searches a string for any of aset of bytes
 * @s: The null- ternimated string to be scanned
 * @accept: The null-terminated string containing the character to match
 *
 * Return: Returns a pointer to the byte in s that matches 
 * oneof the bytes in accept, or Null if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
