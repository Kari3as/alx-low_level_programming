#include "variadic_functions.h"

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: no. of params
 *
 * Return: sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	
	int result = 0;

	va_list lst;

	va_start(lst, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int value = va_arg(lst, int);
			
			result += value;
		}
		
		va_end(lst);

		return (result);
	}

}
