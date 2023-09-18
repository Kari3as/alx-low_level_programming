#include "main.h"
/**
 * swap_int - usr defined funct
 *
 * @a: swap1
 *
 * @b: swap2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int k;
	k = *b;
	*b = *a;
	*a = k;
}
