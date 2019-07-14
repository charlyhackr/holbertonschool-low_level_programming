#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: char array string
 * @c: char to look for
 * Return: a pointer to the first occurrence of the character c
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
