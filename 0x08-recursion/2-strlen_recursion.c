#include "holberton.h"

/**
 * _strlen_recursion - function return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s == '\0')
		return (0);

	length = 1 + _strlen_recursion(s + 1);

	return (length);
}
