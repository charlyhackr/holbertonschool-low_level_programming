#include <stdio.h>
/**
 * main - print de combinatios
 *
 * Return: 0
 */
int main(void)
{
	int f1 = 0;
	int f2 = 0;
	int salto = 1;

	while (f1 <= 8)
	{
		f2 += salto;
		while (f2 <= 9)
		{
			putchar(f1 + '0');
			putchar(f2 + '0');
			if (f1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
			f2++;
		}
		f2 = 0;
		salto++;
		f1++;
	}
	putchar('\n');
	return (0);
}
