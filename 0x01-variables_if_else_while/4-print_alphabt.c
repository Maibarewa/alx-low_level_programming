#include <stdio.h>
#include <stdlib.h>

/**
 * main - thsi program prints lower case except e and q
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'e') || (lower != 'q'))
		{
			++lower;
		}
		putchar(lower);

	}
	putchar('\n');

	return (0);
}
