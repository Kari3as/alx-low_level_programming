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

	ptr2 = malloc(new_size);

	if (ptr2 > ptr)
	{
		free(ptr);
		return (ptr = ptr2);
	}
	else if (ptr == ptr2)
	{
		return (ptr);
	}
	else if (ptr == NULL && ptr2 != NULL)
	{
		return (ptr2);
	}
	else if (ptr != NULL && ptr2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
