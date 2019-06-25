#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @nb: int type number
 * Return: return value of last digit
 */
int print_last_digit(int nb)
{
	int lastnb = nb % 10;

	if (lastnb < 0)
	{
		_putchat(-lastnb + '0');
		return (-lastnb);
	}
	else
	{
		_putchar ('0' + lastnb);
		return (lastnb);
	}
}
