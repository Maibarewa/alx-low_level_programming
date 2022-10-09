#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered
 * from min to max, inclusive
 *
 * @min: the first value of the array
 * @max: the second value of the array
 *
 * Return: if min > or fuction fails - NULL
 *  Otherwise a pointer
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
