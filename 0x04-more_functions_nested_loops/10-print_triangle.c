#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int hash, index;

	if (size <= 0)
		_putchar('\n');
	for (hash = 0; hash < 0; hash++)
	{
		for (index = 1; index < size; index++)
		{
			if (index <= (size - hash))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
