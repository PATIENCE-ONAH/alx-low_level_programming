#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name to be printed
 * @f: A pointer to the function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);

}
