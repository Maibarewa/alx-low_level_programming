#include <stdio.h>
#include "main.h"

/**
 * puts - print every other chracter
 * @str: string
 * 
 return: nothing
 */
void puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}

