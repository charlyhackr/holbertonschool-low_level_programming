#include <stdio.h>
/**
 * main - print double numbers
 *
 * Return: 0
 */
int main(void)
{
	int n1;
	int i;

	for (i = 0; i < 100; i++)
	{
		n1 = i / 10;

		putchar(n1 + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
