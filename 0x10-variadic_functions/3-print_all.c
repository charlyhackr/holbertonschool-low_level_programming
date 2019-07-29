#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_ent - print int numbers
 * @lista: arguments of lista
 * @s: separator
 * Return: nothing
 */

void print_ent(va_list lista, char *s)
{
	printf("%s%d", s, va_arg(lista, int));
}

/**
 * print_char - print chars
 * @lista: argument chars
 * @sep: separator
 */

void print_char(va_list lista, char *sep)
{
	printf("%s%c", sep, va_arg(lista, int));
}

/**
 * print_str - prints string
 * @sep: separator
 * @lista: lista to print
 * Return: nothing
 */

void print_str(va_list lista, char *sep)
{
	char *s;

	s = va_arg(lista, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}

/**
 * print_flo - prints floats
 * @sep: float to print
 * @lista: atgument of list to print
 * Return: nothing
 */

void print_flo(va_list lista, char *sep)
{
	printf("%s%f", sep, va_arg(lista, double));
}

/**
 * print_all - prints out all
 * @format: format is list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list lista;
	char *sep;
	int i, j;
	form_t arr_fm[] = {
		{"c", print_char},
		{"i", print_ent},
		{"s", print_str},
		{"f", print_flo},
		{NULL, NULL}
	};

	va_start(lista, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(arr_fm[j]).arr_fm)
			{
				arr_fm[j].p(lista, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lista);
}
