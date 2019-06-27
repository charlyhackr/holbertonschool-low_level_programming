#include "holberton.h"

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: can only use _puthcar to print
 */
void print_line(int n)
{
	int rayita;

	rayita = 0;
	while (rayita < n)
	{
		_putchar('_');
		rayita++;
	}
	_putchar('\n');
}
