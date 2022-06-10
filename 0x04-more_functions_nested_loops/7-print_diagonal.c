#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the character \
 *
 * @n: The number of \ character to be printed
 */

void print_diagonal(int n)
{
	int diago = 0, spcae;

	if (n > 0)
	{
		while (diago < n)
		{
			for (space = 0; space < diago; space++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');

			diago++;
		}
	}
	else
		_putchar('\n');
}
