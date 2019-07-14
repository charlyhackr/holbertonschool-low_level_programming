#include "holberton.h"

/**
 * _strpbrk - Searches for a string.
 * @s: Pointer
 * @accept: pointer that accepts specific characteres
 * Return: APointer to the byte in s that matches *accept
 */

char *_strpbrk(char *s, char *accept)
{
	int conti1, contj2;
	char *p;

	conti1 = 0;
	while (s[conti1] != '\0')
	{
		contj2 = 0;
		while (accept[contj2] != '\0')
		{
			if (accept[contj2] == s[conti1])
			{
				p = &s[conti1];
				return (p);
			}
			contj2++;
		}
		conti1++;
	}

	return (0);
}
