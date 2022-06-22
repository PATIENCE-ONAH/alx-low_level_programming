#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to return
 *
 * Return: -1 if n is less than 0 to indicate error
 * And the factorial of n if n > 0
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 0)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
