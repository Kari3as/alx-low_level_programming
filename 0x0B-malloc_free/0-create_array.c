#include "main.h"
#include <stdlib.h>

/**
 * create_array - alloc memo for array
 *
 * @size: size of memo block
 *
 * @c: array element
 *
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	ptr = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;

			_putchar(ptr[i]);
		}
		free(ptr);
	}
	return (ptr);
}
