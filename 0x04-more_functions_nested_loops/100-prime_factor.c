#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 **/
int main(void)
{
	long int num1, num_t, least_factor;

	num1 = 2;
	least_factor = 2;
	num_t =  61285247514;

	while (num_t > num1)
	{
		if (num_t % num1 == 0)
		{
			least_factor = 2;
			num_t = num_t / num1;
			num1 = num1 * num1;
		}
		else
		{
			num1++;
		}
	}
	least_factor = num1;
	printf("%ld\n", least_factor);
	return (0);
}
