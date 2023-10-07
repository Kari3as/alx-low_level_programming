#include "main.h"

/**
 * _calloc - allocate memo for array
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: pointer to alloc memo
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

