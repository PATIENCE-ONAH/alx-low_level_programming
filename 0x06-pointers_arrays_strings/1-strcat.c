#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string where we want to append
 * @src: the string from which n character is going to append
 * @n: number of characters to be appended
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len] = src[dest];

	return (dest);
}
