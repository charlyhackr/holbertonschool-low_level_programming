#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int type number
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", n);
}
