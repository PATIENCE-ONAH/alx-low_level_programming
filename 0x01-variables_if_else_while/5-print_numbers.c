#include <stdio.h>
/**
 * main - display function
 *
 * Descrtion: A progarm that prints all single digit number of base 10
 * Return: 0
 */

int main(void)
{
	char dn;

	for (dn = 0; dn < 10; dn++)
	{
		printf("%i", dn);
	}
		putchar('\n');

	return (0);
}
