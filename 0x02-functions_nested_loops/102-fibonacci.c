#include <stdio.h>
/**
 * main - point entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 1, c, count;

	printf("The series is \n");
	printf("%d, %d, ", a, b);
	count = 2;
	while (count <= 50)
	{
		c = a + b;
		if (count <= 49)
		{
			a = b;
			b = c;
			printf("%d, ", c);
		}
		else
		{
			printf("%d\n", c);
		}
		count++;
	}
	return (0);
}
