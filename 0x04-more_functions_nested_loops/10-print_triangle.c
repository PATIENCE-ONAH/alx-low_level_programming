#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int side, index;

	if (size > 0)
	{
		for (side = 1; side <= size; side++)
		{
			for (index = size - side; index > 0; index--)
				_putchar(' ');

			for  (index = 0; index < side; index++)
				_putchar('#');

			if (if side == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
