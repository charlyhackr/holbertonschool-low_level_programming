#include "holberton.h"

/**
 * rev_string -function that reverse a string.
 * @s: char array string type
 *
 */
void rev_string(char *s)
{
	int frase, cont, aux;
	char h;

	for (frase = 0; s[frase] != '\0'; frase++)
		;

	aux = frase;
	for (frase--, cont = 0; cont < aux / 2; frase--, cont++)
	{
		h = s[cont];
		s[cont] = s[frase];
		s[frase] = h;
	}
}
