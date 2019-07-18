#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fails, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int strlen2, a, con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen2 = (unsigned int)_strlen(s1);
	pointer = malloc((strlen2 + n + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	for (a = 0, con = 0; a < (strlen2 + n); a++)
	{
		if (a < strlen2)
			pointer[a] = s1[a];
		else
			pointer[a] = s2[con++];
	}
	pointer[a] = '\0';

	return (pointer);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
