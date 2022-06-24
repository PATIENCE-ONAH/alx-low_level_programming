#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: An array of pointer to the arguments
 *
 * Return: 0,if the program recieve two arguments
 * And 1, if the program doestn't recieve two argument to indicate error
 */

int main(int argc, char argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);

	return (0);
}
