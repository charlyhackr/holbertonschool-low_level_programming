#include "holberton.h"
/**
 * _isdigit - Check for digits ( 0 through 9)
 * @c: int type param
 * Return: 1 if digits, else 0
 */
int _isdigit(int c)
{
	while (c > 47 && c < 58)
		return (1);

	return (0);
}
