#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the character \
 *
 * @n: The number of \ character to be printed
 */

void print_diagonal(int n)
{
	int diago, spcae;

	if (n > 0)
	{
		for (diago = 0; diago < n; diago++)
		{
			for (space = 0; space < diago; space++)
				_putchar(' ');
			_putchar('\\');

			if (diago == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
