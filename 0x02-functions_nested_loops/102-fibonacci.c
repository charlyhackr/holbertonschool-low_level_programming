#include <stdio.h>
/**
 * main - point entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 1, num = 50, c, count;

	printf("The series is \n");
	printf("%d, %d, ", a, b);
	count = 2;
	while (count < num)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d\n", c);
		count++;
	}
	return (0);
}
