#include "main.h"

int helper(int n, int r);
/**
 * _sqrt_recursion - calling func
 *
 * @n: num
 *
 * Return: sqr
*/


int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}

/**
 * helper - recursive  func
 *
 * @n: num
 *
 * @r: sqr
 *
 * Return: sqr
*/

int helper(int n, int r)
{
	if ((r * r) == n)
	{
		return (r);
	}

	else if ((r * r) > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, r + 1));
	}
}
