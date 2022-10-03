#include <stdio.h>

/**
 * main - This program prints the number od arguements passed to it
 * followed by new line
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%s\n", args - 1);
	(void)argv;
	return (0);
}
