#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string lenght
 * @string: string
 * Return: string lenght
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to cancatenate from string 2
 * Return; pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;
	
	if (n == NULL) /*account for NULL strings*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /*account for negative*/
		return (NULL);
	if (num >= _strlen(s2)) /*account for n too big*/
	       num = _strlen(s2);
	len = _strlen(s1) + num + 1; /* +1 to account for null pointer*/

	ptr = malloc(sizeof(*ptr) * len); /*malloc checks for error*/
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; i++)
		ptr[i + j] = s2[i];
	ptr[i + j] = '\0';
	return (ptr);
}
