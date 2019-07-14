#include "holberton.h"

/**
 * _memcpy - FUnction that copies memory area.
 * @dest: POinter
 * @src: POinter
 * @n: Unsigned INteger
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *punt;

	punt = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (punt);
}
