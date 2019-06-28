#include <stdio.h>

/**
 * main - fizz buzz for numbers 1 to 100
 * Description: MUltiples of 3 print Fizz. MUltiples of 5 print Buzz
 * multiples of both three and five print FizzBuzz.
 */
int main(void)
{
	int list;

	list = 1;
	while (list <= 100)
	{
		if (list % 3 == 0 && list % 5 == 0)
			printf("FizzBuzz");
		else if (list % 3 == 0)
			printf("Fizz");
		else if (list % 5 == 0)
			printf("Buzz");
		else
			printf("%d", list);

		if (list != 100)
			printf(" ");
		list++;
	}
	printf("\n");

	return (0);
}
