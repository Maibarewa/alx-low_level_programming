#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program print alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		--lower;
	}
	putchar('\n');

	return (0);
}
