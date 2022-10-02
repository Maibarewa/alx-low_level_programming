#include "main.h"

/**
 * _strspn - get the lenght of a prefix substracting.
 * @s: The null-terminated string string subtracitng.
 * @accept: The null terminated string containing the characters to match
 *
 * Return: Return the number of byte in the initial segment
 * ofbyte swhich consist only of bytes from accept
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
