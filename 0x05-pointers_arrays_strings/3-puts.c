#include <stdio.h>
#include "main.h"

/**
 * _put - prints a string
 * @str:
 * Description: prints a string
 * on success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
}
