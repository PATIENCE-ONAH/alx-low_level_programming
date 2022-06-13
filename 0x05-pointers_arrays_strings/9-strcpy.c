#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: A buffer to copy the string to
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index] != '\0')
	dest[index] = '\0';
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
