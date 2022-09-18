#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: prameter
 * Return: return nothing
 */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line space++)
			{
				putchar('');
			}
			putchar('\\');
			
			if (line == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
}

