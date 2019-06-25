#include "holberton.h"
/**
 * _islower - SHows 1 if the input is a 
 * lowercase character. ANother cases shows 0
 *
 * @c: The character in letters
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
