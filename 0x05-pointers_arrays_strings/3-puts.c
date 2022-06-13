#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: the string
 */

int _puts(char *str)
{
	while (*str)
		_putchr(*str++);

	_putchar('\n);
}
