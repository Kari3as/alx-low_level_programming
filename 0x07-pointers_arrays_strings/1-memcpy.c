#include "main.h"

/**
 * _memcpy -  cpy data from src to dest
 *
 * @dest: pointer to dest location
 *
 * @src: pointer to src location
 *
 * @n: nr of memo blck to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
