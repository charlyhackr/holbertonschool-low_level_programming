#include <stdio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: 0
 */

int main(void)
{
	char letterlow = 'a';

	while (letterlow <= 'z')
	{
		if (letterlow != 'e' && letterlow != 'q')
			putchar(letterlow);
		letterlow++;
	}
	putchar('\n');
	return (0);
}
