#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: Pointer to a the new duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int cont, clon;

	if (str == NULL)
		return (NULL);

	for (cont = 0; str[cont] != '\0'; cont++)
		;
	s = malloc(cont * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (clon = 0; clon < cont; clon++)
		s[clon] = str[clon];
	s[clon] = '\0';

	return (s);
}
