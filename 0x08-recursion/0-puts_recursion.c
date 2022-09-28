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
	_:wqputchar('\n');
		return (0);
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
