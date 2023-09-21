#include "main.h"

/**
 * leet - encode str into 1337
 * @n: nr
 * Return: n
 */
char *leet(char *n)
{
	int i, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[i] == s1[k])
			{
				n[i] = s2[k];
			}
		}
	}
	return (n);
}
