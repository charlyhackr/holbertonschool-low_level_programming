#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int conti1, contj2, contc3;

	conti1 = 0;
	contc3 = 0;

	while (haystack[conti1] != '\0')
	{
		contj2 = 0;
		while (needle[contj2 + contc3] != '\0' && haystack[conti1 + contc3] != '\0'
		       && needle[contj2 + contc3] == haystack[conti1 + contc3])
		{
			if (haystack[conti1 + contc3] != needle[contj2 + contc3])
				break;
			contc3++;
		}
		if (needle[contj2 + contc3] == '\0')
			return (&haystack[conti1]);
		contj2++;
		conti1++;
	}

	return (NULL);
}
