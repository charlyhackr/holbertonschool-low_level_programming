#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @size: number of elements in array
 * @cmp: pointer to the function to be used compare values
 * @array: pointer array
 * Return: the index of the first element for  wich cmp fucnton does
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (cont = 0; cont < size; cont++)
		{
			if (cmp(array[cont]))
				return (cont);
		}
	}
	return (-1);
}
