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

	unsigned int leng  = 0;

	char *temp = str;

	while (*temp != '\0')

	{
		leng = leng + 1;
		temp++;
	}



	ptr = malloc(leng + 1);

	temp = str;

	if (ptr == NULL || temp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < leng; i++)
		{
			ptr[i] = *temp;
			temp++;
		}
		ptr[leng] = '\0';
	}
return (ptr);
}