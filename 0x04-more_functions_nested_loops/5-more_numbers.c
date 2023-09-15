#include "main.h"
/**
 * more_numbers - user defined func
 *
 * Description:  10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: void
*/

void more_numbers(void)
{

	int j = 0;

	while (j < 10)
	{
		char i = '0';

		while (i <= '14')
		{
			_putchar(i);
		}
		_putchar('\n');
		j++
	}
	_putchar('\n');
}
