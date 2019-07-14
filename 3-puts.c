#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: char array string type
 * Description: Can only use _putchar
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
