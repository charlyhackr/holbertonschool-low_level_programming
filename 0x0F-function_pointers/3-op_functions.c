#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two integers
 * @n1: number 1
 * @n2: number 2
 *
 * Return: an integer
 */

int op_add(int n1, int n2)
{
	return (n1 +n2);
}

/**
 * op_sub - difference between integers
 * @n1: number 1
 * @n2: number 2
 *
 * Return: an integer
 */

int op_sub(int n1, int n2)
{
	return (n1 - n2);
}

/**
 * op_mul - multiply between integers
 * @n1: number 1
 * @n2: number 2
 *
 * Return: an integer
 */

int op_mul(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * op_div - division between integers
 * @n1: number 1
 * @n2: number 2
 *
 * Return: an integer
 */

int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (n1 / n2);
}

/**
 * op_mod - the remainder between integers
 * @n1: number 1
 * @n2: number 2
 *
 * Return: an integer
 */

int op_mod(int n1, int n2)
{
	if (n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (n1 % n2);
}
