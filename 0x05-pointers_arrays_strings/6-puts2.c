#include "holberton.h"

/**
 * puts2 - functions that prints one char out of 2 string
 * @str: char array string type
 * Description: print character out of 2
 */
void puts2(char *str)
{
	int char_jump_2;

	for (char_jump_2 = 0; str[char_jump_2] != '\0'; char_jump_2++)
	{
		if (char_jump_2 % 2 == 0)
			_putchar (str[char_jump_2]);
	}
	_putchar('\n');
}
