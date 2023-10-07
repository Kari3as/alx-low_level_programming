#include "main.h"
#include <stdlib.h>

/**
 * setmem -  set memory to 0
 * @s: pointer to allo memo
 * @c: zero
 * Return: pointer
*/


char *setmem(char *s, char c)
{
	while (*s != 0)
	{
		*s = c;
		s++
	}

}

/**
 * _calloc - allocate memo for array
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: pointer to alloc memo
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	setmem(ptr, 0);

	return (ptr);
}

