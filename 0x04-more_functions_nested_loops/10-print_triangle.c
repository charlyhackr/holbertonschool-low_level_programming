#include "holberton.h"

/**
 * print_triangle - Print a triangle aligned right using #
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int space, cont, triangle;

	space = 0;
	cont = size - 1;
	while (space < size)
	{
		cont = size - 1 - space;
		triangle = space + 1;
		while (cont > 0)
		{
			_putchar(' ');
			cont--;
		}
		while (triangle > 0)
		{
			_putchar('#');
			triangle--;
		}
		_putchar('\n');
		space++;
	}

	if (size <= 0)
		_putchar('\n');
}
