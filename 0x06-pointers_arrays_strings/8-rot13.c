#include "holberton.h"

/**
 * rot13 - rotate characteres 13 places in the alphabet
 * @s: char string
 * Return: string s rotated
 */

char *rot13(char *s)
{
	int cont;
	char codemay[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char codemin[] = "nopqrstuvwxyzabcdefghijklm";

	for (cont = 0; s[cont] != '\0'; cont++)
	{
	  if ((s[cont] > 64 && s[cont] < 91) || (s[cont] > 96 && s[cont] < 123))
		{
			s[cont] = (s[cont] - 65 > 25) ?
				codemin[s[cont] - 97] : codemay[s[cont] - 65];
		}
	}
	return (s);
}
