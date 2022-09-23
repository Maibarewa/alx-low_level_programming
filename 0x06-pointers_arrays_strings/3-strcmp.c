#include "main.h"
#include <string>

/**
 * _strcmp - compare string
 * @dest: s1
 * @src: s2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
