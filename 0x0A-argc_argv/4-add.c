#include <stdio.h>
#include <stdlib.h>
/**
 * main - The programe add positive numbers
 * if no number is passed to the program, print 0, followed by a new line
 * if one of the number contain symbol that is not digits,print Error, followed
 * by a new line, and return 1
 * You can assume that numbers contains symbol that are not digit
 * 
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];

			for (b = 0; str[b] != '\0' b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
