#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate memory & copy duplicate str
 *
 * @str: pointer to original string
 *
 * Return: pointer to alloacted memory
*/

char *_strdup(char *str)
{
	int count = 1, i;

	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		count++;
	}

	arr = malloc(count * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count; i++)
	{
		arr[i] = str[i];
	}

	return (arr);





}
