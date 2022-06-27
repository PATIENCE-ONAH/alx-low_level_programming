#include <stdlib.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @c: the character to be located.
 * @s: The string where to locate the character
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 * Or Null if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
