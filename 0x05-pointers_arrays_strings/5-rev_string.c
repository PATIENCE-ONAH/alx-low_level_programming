#include "main.h"

/**
 * _strlen - returns the length
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
		s++;
		len++;

	return (len);
}

/**
 * rev_string - writes a function that reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int len1 = _strlen(s);
	int counter = 0;
	char tem;

	while (counter < len1 / 2)
	{
		tem = *(s + conuter);
		*(s + counter) = *(s + len1 - 1 - counter
		* (s + len1 - 1 - counter) = tem;
		counter++;
	}
}
