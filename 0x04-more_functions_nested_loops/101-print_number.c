#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: int type number
 * Description: can only use_putchar to print
 */
void print_number(int n)
{
	long pten;
	int boolchek;
	long cil;

	boolcheck = n;

	if (cil < 0)
	{
		cil *= -1;
		_putchar('-');
	}

	pten = 1;
	boolchek = 1;
	while (boolchek)
	{
		if (cil / (pten * 10) > 0)
			pten *= 10;
		else
			boolchek = 0;
	}

	while (cil  >= 0)
	{
		if (cil == 1)
		{
			_putchar(cil % 10 + '0');
			cil = -1;
		}
		else
		{
			_putchar((cil / cil % 10) + '0');
			cil /= 10;
		}
	}
}
