#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 *
 * @str: pointer to string
 *
 * Return: pointer to new string
*/

char *_strdup(char *str)
{
	char *ptr;

	unsigned int i;

	ptr = malloc(sizeof(str) / sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < sizeof(str) - 1; i++)
		{
			ptr[i] = *str;
			str++;
		}
	}
return (ptr);
}
