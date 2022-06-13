#include "main.h"

/**
 * rev_string - writes a function that reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int len = 0, int index = 0;
	char tem;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tem = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tem;
	}
}
