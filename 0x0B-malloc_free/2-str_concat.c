#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat 2 strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int leng_s1 = 0, leng_s2 = 0, total_leng, i;
	char *ptr, *temp1 = s1, *temp2 = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*temp1 != '\0')
	{
		leng_s1 += 1;
		temp1++;
	}
	while (*temp2 != '\0')
	{
		leng_s2 += 1;
		temp2++;
	}
	total_leng = leng_s1 + leng_s2 + 1;

	ptr = malloc(total_leng);
	temp1 = s1, temp2 = s2;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < leng_s1; i++)
		{
			ptr[i] = *temp1;
			temp1++;
		}
		for (i = leng_s1; i < total_leng - 1; i++)
		{
			ptr[i] = *temp2;
			temp2++;
		}
		ptr[total_leng - 1] = '\0';
	}
	return (ptr);
}
