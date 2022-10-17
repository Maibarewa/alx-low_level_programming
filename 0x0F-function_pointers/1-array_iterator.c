#include "function_pointers.h"

/**
 * array_iterator - execute a fuction given as a parameter on 
 * each elemet of array.
 * @array: input integer array
 * @size: size of array.
 * @action: poter to function
 * Return: No return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array && action)

		for (i = 0; i < size i++)
			action(array[i]);
}
