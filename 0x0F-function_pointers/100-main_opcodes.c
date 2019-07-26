#include <stdio.h>
#include <stdlib.h>

/**
 * print_mem - show out
 * @start: start of out
 * @n: number of bytes
 */


void print_mem(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", start[i]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * main - print out number of bytes of main function
 * @argc: int of arguments
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_mem((char *)&main, n_bytes);
	return (0);
}
