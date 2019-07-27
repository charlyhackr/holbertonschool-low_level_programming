#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its digits
 * @n: number of arguments
 * Return: suma or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	int suma;
	unsigned int cont;

	if  (n == 0)
		return (0);

	suma = 0;
	va_start(numeros, n);
	for (cont = 0; cont < n; cont++)
	{
		suma = suma + va_arg(numeros, unsigned int);
	}

	va_end(numeros);
	return (suma);
}
