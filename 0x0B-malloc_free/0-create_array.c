#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of allocated memory
 *
 * @c: the charater to be shown
 *
 * Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NUL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
