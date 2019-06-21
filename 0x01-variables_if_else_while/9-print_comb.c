#include <stdio.h>
/**
 * main - print the combinations
 *
 * Return: 0
 */
int main(void)
{
	int comb = '0';

	while (comb <= '9')
	{
		putchar(comb);
		putchar(',');
		putchar(' ');
		comb++;
	}
	putchar('\n');
	return (0);
}
