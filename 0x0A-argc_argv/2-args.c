#include "holberton.h"
#include <stdio.h>

/**
 * main - rints all arguments it receives.
 * @argv:
 * @argc:
 * Return:
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
