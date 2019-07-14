#include "holberton.h"

/**
 * _strcmp - FUnction that compare two strings
 * @s1: char string
 * @s2: char string
 * Return: number negative  or 0 or positive number if s1 > || >|| 0 s2
 */

int _strcmp(char *s1, char *s2)
{
	int st1;

	for (st1 = 0; s1[st1] != '\0' || s2[st1] != '\0'; st1++)
	{
		if (s1[st1] != s2[st1])
			return (s1[st1] - s2[st1]);
	}
	return (0);
}
