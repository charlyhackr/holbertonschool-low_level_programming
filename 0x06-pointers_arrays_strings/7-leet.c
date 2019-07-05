#include "holberton.h"

/**
 * leet - convert a string tio leet speak
 * @s: string to convert
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	int cont, reemp;
	char ori[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	cont = 0;
	while (s[cont] != 0)
	{
		reemp = 0;
		while (ori[reemp] != '\0')
		{
			if (s[cont] == ori[reemp])
				s[cont] = num[reemp];
			reemp++;
		}
		cont++;
	}
	return (s);
}
