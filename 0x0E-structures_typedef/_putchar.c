#include <unistd.h>

/**
 * _putchar - write the character to stdout
 * @c: The character to print 
 * Return: on success 1.
 * Return:
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
