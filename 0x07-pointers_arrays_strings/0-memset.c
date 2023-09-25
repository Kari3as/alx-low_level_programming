#include "man.h"

/**
 * _memset - set specified value to mem blck
 *
 * @s: pointer to mem blck
 *
 * @b: value to be set
 *
 * @n: nr of byte of memo blck
 *
 * Return: pointer to memo blck
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0;  i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
