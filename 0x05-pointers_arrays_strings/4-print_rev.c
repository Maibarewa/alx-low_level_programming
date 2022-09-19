#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints  a srting in reverse order
 * @s: string to reverse
 * return: Nothing
 */
void print_rev(char *s)
{
	int len = string(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
