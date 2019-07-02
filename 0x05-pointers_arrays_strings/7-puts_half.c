#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: char array string type
 * Description: If odd number chars, print (length -1) / 2 for divide the char
 */

void puts_half(char *str)
{
	int half_char;

	for (half_char = 0; str[half_char] != '\0'; half_char++)
		;

	half_char++;
	for (half_char /= 2; str[half_char] != '\0'; half_char++)
	{
		_putchar(str[half_char]);
	}
	_putchar('\n');
}
