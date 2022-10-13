#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: pointer to name
 * @f: fucntion poiter.
 *
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
