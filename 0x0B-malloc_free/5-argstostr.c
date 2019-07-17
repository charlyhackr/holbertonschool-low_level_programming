#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all arguments of your program
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *s, *conct;
	int fi, cj, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (fi = 0, sum = 0; fi < ac; fi++)
	{
		for (cj = 0; *(*(av + 1) + cj) != '\0'; cj++, sum++)
			;
		sum++;
	}
	sum++;

	s = malloc(sum * sizeof(char));
	if (s == NULL)
		return (NULL);

	conct = s;
	for (fi = 0; fi < ac; fi++)
	{
		for (cj = 0; av[fi][cj] != '\0'; cj++)
		{
			*s = av[fi][cj];
			s++;
		}
		*s = '\n';
		s++;
	}

	return (conct);
}
