#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @src: The source memory area to copy from.
 * @dest: The destination memory area to copy to.
 * @n: The number of byte to copy
 *
 * Return: A pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
