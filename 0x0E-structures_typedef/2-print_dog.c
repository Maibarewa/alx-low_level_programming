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
		if (d == NULL)
			return;

		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
