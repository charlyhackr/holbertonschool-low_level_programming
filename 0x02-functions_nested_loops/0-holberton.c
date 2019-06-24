#include <holberton.h>
/**
 * Main function, entry point
 *
 * Bucle while with array []
 * Return_ 0
 */
int main(void)
{
	char letter[] = 'Holberton';
	int cont = 0;

	while (letter[cont] != '\0')
	{
		_putchar(letter[cont]);
		cont++;
	}
	_putchar('\n');
	return (0);
}
	
