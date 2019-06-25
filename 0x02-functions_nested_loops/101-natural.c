#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main function main
 * Description: print the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int suma = 0;

	while (a < 1024)
	{
		if (a % 3 == 0)
			suma += a;
		else if (a % 5 == 0)
			suma += a;

		a++;
	}
	printf("%d\n", suma);

	return (0);
}
