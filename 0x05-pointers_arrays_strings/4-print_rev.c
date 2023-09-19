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
	int leng = _strlen(s);

	for (*s = leng - 1; *s >= 0, *s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
