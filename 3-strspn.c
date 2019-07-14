#include "holberton.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int conti1;
	int contj2;
	int contc3;

	conti1 = 0;
	contc3 = 0;

	while (s[conti1] != '\0')
	{
		contj2 = 0;
		while (accept[contj2] != '\0')
		{
			if (s[conti1] == accept[contj2])
			{
				contc3++;
				break;
			}
			contj2++;
		}
		if (accept[contj2] == '\0')
			break;
		conti1++;
	}
	return (contc3);
}
