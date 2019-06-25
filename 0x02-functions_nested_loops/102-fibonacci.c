#include <stdio.h>
/**
 * main - point entry
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count;

	printf("%ld, %ld, ", a, b);
	count = 2;
	while (count <= 49)
	{
		c = a + b;
		if (count <= 48)
		{
			a = b;
			b = c;
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld\n", c);
		}
		count++;
	}
	return (0);
}
