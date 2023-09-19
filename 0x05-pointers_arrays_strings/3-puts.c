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
	char k = *s;

	while (*str)
	{
		write(1, k, 1);
		str++;
	}
	write(1, "\0", 1);
}
