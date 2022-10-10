#include "dog.h"
#include <stdio.h>

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
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		
		printf("Age: %f\n ", d->ag);

		if(!(d->owner))
			printf("Owner: (nil)\n");
		else
			print("Owner: %s\n",d->owner);
	}
}
