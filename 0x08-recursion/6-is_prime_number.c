#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - chk prime num
 *
 * @n: num
 *
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}

/**
 * prime - chk prime
 *
 * @n: num1
 *
 * @i: num2
 *
 * Return: 1 or 0
*/

int prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}

}
