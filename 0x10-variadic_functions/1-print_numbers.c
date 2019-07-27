#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string for separated between numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int cont;

	va_start(numbers, n);
		for (cont = 0; cont < n; cont++)
		{
			printf("%d", va_arg(numbers, unsigned int));
		}

	if (cont < (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}

	va_end(numbers);
	printf("\n");
}
