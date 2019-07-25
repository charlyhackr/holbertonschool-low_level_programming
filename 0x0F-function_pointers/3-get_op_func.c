#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - search for an integer
 * @s: string
 *
 * Return: no return
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int cont;

	cont = 0;
	while (cont < 5)
	{
		if (s[0] == ops[cont].op[0])
			return ((ops[cont].f));
		cont++;
	}
	return (NULL);
}
