#include <stdio.h>

/**
 * main - prints alphabet in lower case
 *
 * Return: 0
 */
int main(void)
{
	char zh = 'a';
	while (zh <= 'z')
	{
		putchar(zh);
		++zh;
	}
	putchar('\n');

	return (0);
}

