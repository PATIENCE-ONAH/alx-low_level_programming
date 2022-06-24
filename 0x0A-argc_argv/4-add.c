#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointer to the arguments
 *
 * Return: 0, if no number is passed to the program
 * And 1, if one of the number contain symbol that is not a digit
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
