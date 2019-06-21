#include <stdio.h>
/**
 * main - print te main function
 *
 * Return: 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
