#include "holberton.h"
#include <stdio.h>
/**
 * print_number - that prints an integer.
 * @n: integer ti print
 */

void print_number(int n)
{
	int pot, nega, alma;

	nega = 0;
	pot = 1;
	alma = n;
	if (n < 0)
	{
		_putchar('-');
		nega = 1;
	}

	while (alma > 9 || alma < -9)
	{
		pot *= 10;
		alma /= 10;
	}

	while (pot > 0)
	{
		if (pot > 9)
		{
			if (!nega)
				_putchar((n / pot % 10) + '0');
			else
				_putchar((n / pot % 10) * -1 + '0');

			pot /= 10;
		}
		if (pot == 1)
		{
			if (nega)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			pot = 0;
		}
	}
}
