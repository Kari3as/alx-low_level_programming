#include "main.h"

/**
 * print_rev - usr func
 *
 * @s: str
 *
 * Return: void
*/

void print_rev(char *s)
{
	int leng = 0;
	int i;

	while (*s)
	{
		leng++;
		s++;
	}


	for (i = leng-1 ; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\0');
}
