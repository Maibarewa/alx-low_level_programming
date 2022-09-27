#include "main.h"

/**
 * _strspn - grt the lenght of a prefix
 * @s: The null-terminated string to be scanned 
 * @accept: the null- terminating string containing the character to match
 *
 * Return: Return the number of bytes in the initial segment of s which 
 * consist of only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
