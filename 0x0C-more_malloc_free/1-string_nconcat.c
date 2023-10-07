#include "main.h"

/**
 * string_nconcat - concat 2 str
 *
 * @s1: str 1
 *
 * @s2: str2
 *
 * @n: no of byte for s2
 *
 * Return: pointer alloc memo
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k, lens1 = 0, lens2 = 0, tlen;
	char *ptr, *temp1 = s1, *temp2 = s2;

	while (*s1 != 0)
	{
		lens1 += 1;
		s1++;
	}
	while (*s2 != '\0')
	{
		i += 1;
		s2++;
	}
	tlen = lens1 + lens2 + 1;
	ptr = malloc(tlen);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < lens1; k++)
		{
			ptr[k] = *temp1;
			temp1++;
		}
		for (k = lens1; k < tlen - 1; k++)
		{
			ptr[k] = *temp2;
			temp2++;
		}
		ptr[tlen - 1] = '\0';
	}
	return (ptr);
}
