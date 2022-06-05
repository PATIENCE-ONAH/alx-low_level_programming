#include <stdio.h>
/**
 * main - prints function
 *
 * Description: A program that prints lowercase alphabet in reverse form
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar('\n');

	return (0);
}
