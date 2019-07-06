#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: int type number
 * Description: can only use_putchar to print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
