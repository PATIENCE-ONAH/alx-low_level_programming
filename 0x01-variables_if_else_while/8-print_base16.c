#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
	int dn;
	char ch;

	for (dn = 0; dn < 10; dn++)
	{
		putchar((dn % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');

	return (0);
}
