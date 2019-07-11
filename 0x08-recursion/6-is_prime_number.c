#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: int number
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return  (aux(n, 2));
}

/**
 * _sqrt - return square root of number
 * @x: number
 * @inc: incremental number act as divisor
 * Return: square root of x
 */

int _sqrt(int x, int inc)
{
	int raiz;

	raiz = inc * inc;
	if (raiz >= x)
		return (inc);
	else
		return (_sqrt(x, inc + 1));
}

/**
 * aux - auxiliar function, recursive taken steps
 * @n: number given to original function is_prime_number
 * @div: incremental divisor
 * Return: 0 if not prime, 1 if prime
 */

int aux(int n, int div)
{
	if (n % div == 0)
		return (0);
	else if (_sqrt(n, 1) < div)
		return (1);
	else
		return (aux(n, div + 1));
}
