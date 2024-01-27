#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 *
 * @n: nums
 *
 * Return: sum or 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list lst;

	va_start(lst, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(lst, int);

			printf("%d", num);

			if (i < n - 1)
			{
				printf("%c", *separator);

			}
		}

		printf("\n");

		va_end(lst);
	}
}
