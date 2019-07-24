#include "function_pointers.h"

/**
 * array_iterator -function given as a parameter on each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t cont;

	if (array == NULL || action == NULL)
		exit(98);
	for (cont = 0; cont < size; cont++)
		action(array[cont]);
}
