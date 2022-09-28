#include "main.h"

/**
 * _print_rev_recursion - print a string in revers
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s);
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		-putchaar (*s);
	}
}
