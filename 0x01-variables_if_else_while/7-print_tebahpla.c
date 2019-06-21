#include <stdio.h>
/**
 * main - function print the reverse alphabet
 *
 * Return: 0
 */
int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
