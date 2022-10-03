#include <stdio.h>

/**
 * main - write a program that print its name followeed by new line
 * if you rename the program it will print new name with out havig to
 * compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
