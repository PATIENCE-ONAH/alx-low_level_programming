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
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)

		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	return (0);
}