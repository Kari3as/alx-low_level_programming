#include "main.h"
#include <stdlib.h>

/**
 * ordernum - order arr
 * @arr: pointer to arr
 * @min: min num
 * @max: max num
 * Return: pointer
*/

int *ordernum(int *arr, int min, int max)
{
	int i = 0, k;

	for (k = min; k <= max; k++)
	{
		arr[i++] = k;
	}
	return (arr);
}

/**
 * array_range - array for int from min to max
 * @min: min num
 * @max: max num
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int nmemb;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	nmemb = max - min + 1;

	ptr = malloc(nmemb * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ordernum(ptr, min, max);

	return (ptr);
}
