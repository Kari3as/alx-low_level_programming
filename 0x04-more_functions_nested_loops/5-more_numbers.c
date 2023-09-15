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
	int j, i, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			k = i;
			if (i > 9)
			{
				_putchar('1');
				k = i % 10;
			}

			_putchar(k + '0');
		}

		_putchar('\n');
	}

}
