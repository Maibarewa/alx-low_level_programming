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
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
