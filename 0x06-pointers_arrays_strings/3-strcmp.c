#include "main.h"

/**
 * _strcmp - comparea a pointer to two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: 0 if s1 ==s2
 * negative if s1 < s2
 * positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}

	return (*s1 - *s2);
}
