#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int fi, cj, con, de;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (fi = 0; s1[fi] != '\0'; fi++)
		;
	for (cj = 0; s2[cj] != '\0'; cj++)
		;

	s = malloc((fi * sizeof(*s1)) + (cj * sizeof(*s2)) + 1);
	if (s == NULL)
		return (NULL);

	for (con = 0, de = 0; con < (fi + cj + 1); con++)
	{
		if (con < fi)
			s[con] = s1[con];
		else
			s[con] = s2[de++];
	}

	return (s);
}
