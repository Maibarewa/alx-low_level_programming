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
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
