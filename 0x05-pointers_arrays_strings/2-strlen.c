#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int lon;

	for (lon = 0; s[lon] != '\0'; lon++)
		;

	return (lon);
}
