#include "holberton.h"

/**
 * reverse_array - that reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int cont;
	int rev;

	for (cont = 0; cont < (n / 2); cont++)
	{
		rev = a[cont];
		a[cont] = a[n - cont - 1];
		a[n - cont - 1] = rev;
	}
}
