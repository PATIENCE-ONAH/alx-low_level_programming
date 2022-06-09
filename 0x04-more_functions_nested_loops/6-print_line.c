#include "main.h"
/**
 * print_line - Draws a line using the character _
 * @n: The number of _ character to be printed
 */

void print_line(int n)
{
	int lenght;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
			_putchar('_');
	}
	_putchar('\n');
}
