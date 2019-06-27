#include "holberton.h"
/**
 * _isupper - Function that checks for uppercase character
 * @c: int type number
 * Return: 1 if uppercase, else return 0
 */
int _isupper(int c)
{
	while (c > 64 && c < 91)
		return (1);

	return (0);
}
