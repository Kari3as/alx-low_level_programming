#include "main.h"

/**
 * _pow_recursion - eturns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 * Return: numuber of x multiplied to itself y times
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}

