#include <stdio.h>

/**
 * main - main function
 * Description: that finds and prints the sum of the even-valued terms
 * do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	int s = 1, ciclo = 2, suma = 0;
	int c;

	while (ciclo < 4000000)
	{
		if (ciclo % 2 == 0)
			suma += ciclo;

		c = ciclo;
		ciclo += s;
		s = c;
	}
	printf("%d\n", suma);
	return (0);
}
