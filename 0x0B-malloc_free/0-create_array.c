#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of character
 * @c: The character to be created
 *
 * Return: NULL if size is 0 or it fails.
 * Or a pointer to the array if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[size] = c;

	return (array);
}
