#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Return: 0 Always (Succes)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int ciclo = 0;

	while (ciclo < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		ciclo++;
	}
}
