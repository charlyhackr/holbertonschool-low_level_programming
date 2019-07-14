#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers or error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs good
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
