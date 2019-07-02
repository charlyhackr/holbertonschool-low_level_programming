#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * DEscription: function that copies the string pointed to by src, including
 * terminating null byte (\0), to the buffer
 * pointed to by dest.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int stri_cp;

	for (stri_cp = 0; src[stri_cp] != '\0'; stri_cp++)
	{
		dest[stri_cp] = src[stri_cp];
	}
	dest[stri_cp] = '\0';

	return (dest);
}
