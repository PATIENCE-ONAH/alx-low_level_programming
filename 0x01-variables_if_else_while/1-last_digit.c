#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int las;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	las = n % 10;
	if (las > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, las);
	}
	else if (las == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, las);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las);
	}

	return (0);
}
