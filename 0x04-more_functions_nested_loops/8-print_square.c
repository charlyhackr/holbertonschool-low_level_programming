#include "holberton.h"

/**
 * print_square - print a square
 * @size: of square
 * Description: CAn only use _putchar to print. Use # for square.
 */
void print_square(int size)
{
	int square, pos;

	pos = 0;

	if (size < 1)
		_putchar('\n');

	while (pos < size)
	{
		square = 0;
		while (square < size)
		{
			_putchar('#');
			square++;
		}
		_putchar('\n');
		pos++;
	}
}
