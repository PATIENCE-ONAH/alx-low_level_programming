#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The value to be raised
 * @y: the power
 *
 * Return: -1 if y < 0, and the value of
 * x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);

	return (value);
}
