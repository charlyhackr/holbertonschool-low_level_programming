#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * Description: print sum 2 diagonals (square matriz)
 * @a: pointer variable
 * @size: sizeof matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int cont;
	int sumdi = 0;
	int sumus = 0;

	for (cont = 0; cont < size; cont++)
	{
		sumdi += *(a + ((size * cont) + cont));
		sumus += *(a + (size - 1) * (cont + 1));
	}
	printf("%d, %d\n", sumdi, sumus);
}
