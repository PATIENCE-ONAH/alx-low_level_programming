#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory to be filled.
 * @b: the character tk fill th memory area with
 * @n: The number of byte to be filled
 *
 * Return: A pointer ti the filled memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
