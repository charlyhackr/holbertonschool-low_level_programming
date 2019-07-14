#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers or 0 if not digit or error if digits symbols
 * @argc: argument count
 * @argv: argumetn vector, array of strings
 * Description: If not number is passed to program, print 0.
 * if digits passed are non-digits, print error.
 * Return: 1 if error, 0 if functions works well
 */

int main(int argc, char *argv[])
{
	int suma, a;
	char *p;
	int num;

	suma = 0;
	if (argc > 1)
	{
		for (a = 1; argv[a]; a++)
		{
			num = strtol(argv[a], &p, 10);
			if (!*p)
				suma += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", suma);
	return (0);
}
