#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: string1
 * @src: string 2
 * @n: no. of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[i] = src[k];
	i++;
	k++;
	}
	dest[i] = '\0';
	return (dest);
}
