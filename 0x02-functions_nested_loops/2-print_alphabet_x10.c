#include "main.h"

/**
 * print_laphabet_tentimes - function to print abc.. times ten
 * 
 * Description: this program print lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
