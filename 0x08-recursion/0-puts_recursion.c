#include "main.h"

/**
 * _puts_recursion - prints str
 *
 * @s: pointer to a string
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		ـputchar('\n');
	}
}
