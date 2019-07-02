#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: NUmbers must be separated by comma and space.
 *
 */
void print_array(int *a, int n)
{
	int elemn;

	elemn = 0;
	for (n--; n >= 0; n--, elemn++)
	{
		printf("%d", a[elemn]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
