#include <stdio.h>
#include <stdlib.h>
/**
 * main - The program multiplies numbers.
 * followed by new line
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (n = 0; n < argc; n++)
	{
		multiplication = multiplication * atoi(argv[n]);
	}
	printf("%d\n", multiplication);
	return (0);
}
