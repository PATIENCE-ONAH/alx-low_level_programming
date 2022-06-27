#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an interger
 * @n: The integer to be computed
 *
 * Return: Absolute value of an interger
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
