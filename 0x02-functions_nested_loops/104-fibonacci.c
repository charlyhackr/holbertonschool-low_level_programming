#include <stdio.h>

/**
 * main - fibonnacci sequence
 *
 * Description: prints the first 98 fibonacci sequence numbers
 * Return: 0
 */
int main(void)
{
	int seqfibo = 3;
	double fibo;
	double numin1 = 1;
	double numin2 = 2;

	print("%.0f, ", numin1);
	print("%.0f, ", numin2);

	while (seqfibo <= 98)
	{
		fibo = numin1 + numin2;
		printf("%.0f", fibo);
		if (seqfibo < 98)
			printf(", ");
		numin1 = numin2;
		numin2 = fibo;
		seqfibo++;
	}
	printf("\n");
	return (0);
}
