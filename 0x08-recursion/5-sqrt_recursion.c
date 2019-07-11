#include "holberton.h"

/**
 * _sqrt_recursion - blank
 * @n: natural number
 * Return: -1 if no natural square root, else return sqaure root
 */

int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}

/**
 * aux -  function to solve sqrt_recursion
 * @sr: number to determine square root
 * @comp: compare against sr
 * Return: sqaure root if natural sqaure root, or -1 if none found
 */

int aux(int sr, int comp)
{
	int raiz;

	raiz = comp * comp;
	if (raiz == sr)
		return (comp);
	else if (raiz < sr)
		return (aux(sr, comp + 1));
	else
		return (-1);
}
