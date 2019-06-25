#include "holberton.h"
/**
 * times_table  -  function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int tabla = 0;
	int mult = 1;

	while (tabla < 10)
	{
		_putchar('0');
		{
			mult = 1;
			while (mult < 10)
			{
				int pro = mult * tabla;

				if (pro < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(pro + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((pro / 10) + '0');
					_putchar((pro % 10) + '0');
				}
				mult++;
			}
			_putchar('\n');
			tabla++;
		}
	}
}
