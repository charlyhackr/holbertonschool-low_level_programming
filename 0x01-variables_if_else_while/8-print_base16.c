#include <stdio.h>
/**
 * main - print hexadecimal con putchar
 *
 * Return: 0
 */
int main(void)
{
	char hexa = '0';
	char decimal = 'a';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}

	while (decimal <= 'f')
	{
		putchar(decimal);
		decimal++;
	}

	putchar('\n');
	return (0);
}
