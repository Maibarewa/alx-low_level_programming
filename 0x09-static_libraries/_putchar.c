#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: The chracter to print
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
