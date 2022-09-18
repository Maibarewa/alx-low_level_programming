#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program print alpahbet in lower case and then in upper case
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'a')
	{
		putchar(lower);
		++lower;
	}

	while (upper <= 'A')
	{
		putchar(upper);
		++upper;
	}

	putchar('\n');

	return (0);
}

