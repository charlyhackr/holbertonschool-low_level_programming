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
	while (count < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
		count++;
	}
	return (0);
}
