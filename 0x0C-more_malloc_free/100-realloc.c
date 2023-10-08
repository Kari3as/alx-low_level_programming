#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc memo
 * @ptr: pointer to old alloc memo
 * @old_size: size of old alloc memo
 * @new_size: size of new alloc memo
 * Return: pointer to alloc memo
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i;

	ptr2 = malloc(new_size);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr2[i] = ptr[i];
		}
		free(ptr);
		return (ptr2);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL && ptr2 != NULL)
	{
		return (ptr2);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr2);
}
