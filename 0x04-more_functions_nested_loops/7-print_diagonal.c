#include "main.h"
/**
 * print_diagonal - usr defuned func
 *
 * @n: no. of lines
 *
 * Return: void
*/
void print_diagonal(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	} else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	} else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
