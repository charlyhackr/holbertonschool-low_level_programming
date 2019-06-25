#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowcase
 *
 * Return: Always 0 (SUcces)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}



