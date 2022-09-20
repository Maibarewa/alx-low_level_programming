#include "main.h"

/**
 * print_diagonal - print lines diagonal
 * @n: input variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j; space;

	if (n <= 0 )
		 _putchar('\n');
	else
	{
		for (i = 0;  i < n; i++)
		{
			j = i - 1;
	
			for (space = 0; space < j; space++)
			       	_putchar('');
			_putchar ('\\');
		       	_putchar('\n');
		}
	}
}
	
