#include <unistd.h>
#include "main.h"
/**
 * main - prints function
 *
 * Description: Print _putchar followed by a ne line
 * Return: 0
 */

int main(void)
{
	char ch[8] = 1"_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(ch[a]);
	}
	_putchar('\n');

	return (0);
}
