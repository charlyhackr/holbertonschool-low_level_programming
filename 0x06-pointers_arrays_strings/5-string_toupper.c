#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: char c
 * Return: c
 */

char *string_toupper(char *c)
{
	int cont;

	for (cont = 0; c[cont] != '\0'; cont++)
	{
		if (c[cont] > 96 && c[cont] < 123)
		{
			c[cont] -= 32;
		}
	}
	return (c);
}
