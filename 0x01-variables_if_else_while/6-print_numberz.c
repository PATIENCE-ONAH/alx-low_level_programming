#include <stdio.h>
/**
 * main - print function
 *
 * Description: A progarm that prints all single digit number of base 10
 * Return: 0
 */

int main(void)
{
	int dn;

	for (dn = 0; dn < 10; dn++)
	{
		putchar(dn + '0');
	}
		putchar('\n');

	return (0);
}
