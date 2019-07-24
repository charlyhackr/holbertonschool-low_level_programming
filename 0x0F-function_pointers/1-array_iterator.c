#include "function_pointers"

/**
 * array_iterator -function given as a parameter on each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t cont;

	for (cont = 0; cont < size; cont++)
		action(array[cont]);
}
