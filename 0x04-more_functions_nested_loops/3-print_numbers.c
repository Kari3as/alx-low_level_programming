#include "main.h"

/**
 * print_numbers - user defuned func
 *
 * Description: prinited digit
 *
 * Retrun: void
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
