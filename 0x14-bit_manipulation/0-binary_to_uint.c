#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: return to the sum or 0 if there an un unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int suma, potencia;
	int pos;

	if (b == NULL)
		return (0);

	for (pos = 0; b[pos]; pos++)
	{
		if (b[pos] != '0' && b[pos] != '1')
			return (0);
	}
	for (potencia = 1, suma = 0, pos--; pos >= 0; pos--, potencia *= 2)
	{
		if (b[pos] == '1')
			suma += potencia;
	}
	return (suma);
}
