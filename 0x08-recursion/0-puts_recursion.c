#include "main.h"

/**
 * _puts_recursion - print s string follow by new line
 * @*s: parameter to print
 * Return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		
		_putchar (s[0]);
		_puts_recursion(s + 1);
	}
	return (0);
}
