#include "main.h"
/**
 * _puts - print str to stdout
 *
 * @str:  string
 *
 * Return: void
*/

void _puts(char *str)
{


	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
