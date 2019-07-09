#include "holberton.h"

/**
 * print_chessboard - print the chessboard, array 2d
 * @a: array d2 of chars
 */

void print_chessboard(char (*a)[8])
{
	int ejey, ejex;

	ejey = 0;
	while (ejey < 8)
	{
		ejex = 0;
		while (ejex < 8)
		{
			_putchar(a[ejey][ejex]);
			ejex++;
		}
		_putchar('\n');
		ejey++;
	}
}
