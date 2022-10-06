#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in a memory
 * which contains a copy of the string passed
 * @str: pointer to the string bieng duplicated
 * Return: NULL if the string is NULL 
 * pointer to the dulplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/*check is the string null*/
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[i] = '\0';
	return (nstr);
}
