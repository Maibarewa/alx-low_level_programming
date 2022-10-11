#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - initializes a variable dog
 * @d: Struct dog.
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			return;
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: f\nowner: %s\n", d->name, d->age, d->owner);
		
	}
}
