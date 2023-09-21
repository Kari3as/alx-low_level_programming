#include "main.h"

/**
 * _strcmp - compare str values
 * @s1: str1
 * @s2: str2
 *
 * Return: s1[k] - s2[k]
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
