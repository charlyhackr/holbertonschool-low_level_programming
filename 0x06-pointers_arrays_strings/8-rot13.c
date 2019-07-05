#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	int c1, c2;

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char deco[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; alph[c2] != '\0'; c2++)
		{
			if (s[c1] == alph[c2])
			{
				s[c1] = deco[c2];
				break;
			}
		}
	}
	return (s);
}
