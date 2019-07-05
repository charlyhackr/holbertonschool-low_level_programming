#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 **/
int main(void)
{
	long int n = 612852475143;
	long int cont, resul;

	for (cont = 2; cont <= n; cont++)
	{
		if (n % cont == 0)
		{
			resul = cont;

			while (n % cont == 0)
			{
				n /= cont;
			}
		}
	}

	printf("%ld\n", resul);

	return (0);
}
