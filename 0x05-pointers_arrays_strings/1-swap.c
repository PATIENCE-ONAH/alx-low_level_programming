#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: First integer
 * @b: Second interger
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
