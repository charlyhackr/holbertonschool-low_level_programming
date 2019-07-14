#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 * @dest: char string
 * @src: char string
 * @n: number of characters to copy over
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int st1;

	for (st1 = 0; st1 < n && src[st1] != '\0'; st1++)
		dest[st1] = src[st1];

	for (; n > st1; st1++)
		dest[st1] = '\0';

	return (dest);
}
