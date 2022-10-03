#include <unistd.h>

/**
 * _putchar - write the vharacter c to print
 * @c: The character to print
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
