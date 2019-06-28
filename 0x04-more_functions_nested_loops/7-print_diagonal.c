#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the \ char is printed
 * DEscription: can only use _putchar to print
 */
void print_diagonal(int n)
{
	int diag, esp;

	diag = 0;

	while (n > 0)
	{
		esp = diag;
		while (esp > 0)
		{
			_putchar(' ');
			esp--;
		}
		_putchar('\\');
		_putchar('\n');
		diag++;
		n--;
	}
	if (diag < 1)
		_putchar('\n');
}
