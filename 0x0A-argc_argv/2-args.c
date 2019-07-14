#include "holberton.h"
#include <stdio.h>

/**
 * main - rints all arguments it receives.
 * @argv: array of string
 * @argc: arguments count
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
