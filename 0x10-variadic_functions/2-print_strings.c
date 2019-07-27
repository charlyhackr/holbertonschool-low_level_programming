#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separators
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cadenas;
	unsigned int cont;
	char *punt;

	va_start(cadenas, n);
	for (cont = 0; cont < n; cont++)
	{
		punt = va_arg(cadenas, char *);
		if (punt == NULL)
			printf("(nil)");
		else
		{
			printf("%s", punt);
			if (cont < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(cadenas);
	printf("\n");
}
