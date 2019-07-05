#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int cont = 0;

	while (s[cont] != 0)
	{
		if (s[cont] >= 'a' && s[cont] <= 'z')
		{
			if (cont == 0)
				s[cont] -= 32;
			else if (s[cont - 1] == ',' || s[cont - 1] == ';' || s[cont - 1]
				 == '.' || s[cont - 1] == '!' || s[cont - 1] == '"'
				 || s[cont - 1] == ')' || s[cont - 1] == '(' ||
				 s[cont - 1] == '{' || s[cont - 1] == '}' || s[cont - 1]
				 == '\n' || s[cont - 1] == 32 || s[cont - 1] == '\t')
				s[cont] -= 32;
		}
		cont++;
	}
	return (s);
}
