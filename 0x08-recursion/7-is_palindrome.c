#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - that returns 1 if a string is a palindrome and 0 if not.
 * @s: string to calculate length
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - function
 * @s: string
 * Return: function
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (aux_palindrome(s, len));
}

/**
 * aux_palindrome - function
 * @s: string
 * @len: length
 * Return: string
 */

int aux_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (aux_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}
