#include <stdio.h>
/**
 * main - print alphabet min and may
 *
 *Return: 0
 */

int main(void)
{
	char cap_letter = 'A';
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (cap_letter <= 'Z')
	{
		putchar(cap_letter);
		cap_letter++;
	}

	putchar('\n');
	return (0);
}
