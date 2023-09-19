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
	while (*s)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\0", 1);
}
