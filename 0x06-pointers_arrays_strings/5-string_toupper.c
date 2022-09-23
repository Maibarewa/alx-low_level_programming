#include "main.h"

/** 
 * string_toupper - change all lowercases of a string to upper
 * @str: parameter
 * Return: returns a character
 */
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
