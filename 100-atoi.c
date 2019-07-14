#include "holberton.h"

/**
 * _atoi - convert to string yo integer.
 * @s: char array string
 * Description: NUmber in the string can be preceded by an infinite
 * number of characters.
 * You need to are no numbers in the string, return 0.
 * NO need to cheek for overflow
 * Not allowed to hard-code special values.
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	short boolean;
	int i, minus, result;

	i = minus = result = boolean = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
