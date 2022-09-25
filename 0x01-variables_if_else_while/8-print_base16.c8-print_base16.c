#include <stdio.h>
#include <stdlib.h>

/**
 * main - Thsi program print all number of base 16
 * Return 0
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
	}
	putchar('\n');
	return (0);
}

