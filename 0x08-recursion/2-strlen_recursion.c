#include "main.h"

/**
 * _strlen_recursion - The function prints string length
 * @s: The string to be printed
 * Return: string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
