#include <stdio.h>
#include <stlib.h>

/**
 * main - the function print all digit number of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
