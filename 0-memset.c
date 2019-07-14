#include "holberton.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: bufer array
 * @b: byte constant
 * @n: number of bytes
 * Description: Fill the first n bytes of the memory area pointed to by s
 * wuth the constant byte b
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	cont = 0;
	while (cont < n)
	{
		s[cont] = b;
		cont++;
	}

	return (s);
}
