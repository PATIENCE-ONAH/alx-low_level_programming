#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointer to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
