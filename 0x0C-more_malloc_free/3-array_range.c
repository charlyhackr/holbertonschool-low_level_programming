#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value to include
 * max: max value to include
 * Return: pointer to newly creates the array
 */

int *array_range(int min, int max)
{
	int *pointer, a;

	if (min > max)
		return  (NULL);

	pointer = malloc((max - min + 1) * sizeof(*pointer));
	if (pointer == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		pointer[a] = min;

	return (pointer);
}
