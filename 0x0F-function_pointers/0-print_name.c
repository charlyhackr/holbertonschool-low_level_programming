#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: char string
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
