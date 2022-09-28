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
		putchar('\n');
		return (0);
	}
	putchar (*s);
	puts_recursion(s + 1);
}
