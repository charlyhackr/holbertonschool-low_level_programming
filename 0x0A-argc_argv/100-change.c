#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 if negetive
 */

int main(int argc, char *argv[])
{
	int suma, cont;
	unsigned int a;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	suma = strtol(argv[1], &p, 10);
	cont = 0;

	if (!*p)
	{
		while (suma > 1)
		{
			for (a = 0; a < sizeof(cents[a]); a++)
			{
				if (suma >= cents[a])
				{
					cont += suma / cents[a];
					suma = suma % cents[a];
				}
			}
		}
		if (suma == 1)
			cont++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cont);
	return (0);
}
