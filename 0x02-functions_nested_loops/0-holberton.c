#include "holberton.h"
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (SUcces)
 */
int main(void)
{
	char letter[] = "Holberton";
	int cont = 0;

	while (letter[cont] != '\0')
	{
		_putchar(letter[cont]);
		cont++;
	}
	_putchar('\n');
	return (0);
}
