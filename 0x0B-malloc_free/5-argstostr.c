#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns length of the given string
 * @str: given string
 * Return: returns the length of the given string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of the given arguments
 * @av: given arguments - multiple strings
 * Return: a pointer to a new string, or NULL if it failes
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; ++i)
	{
		len += _strlen(av[i]);
		++len;
	}

	++len;

	concat = malloc(len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			concat[k] = av[i][j];
			++k;
		}
		concat[k] = '\n';
		++k;
	}
	concat[k] = '\0';

	return (concat);
}
