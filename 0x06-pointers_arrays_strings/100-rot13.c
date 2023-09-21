#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode str rot13
 * @s: pointer to str
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	int k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[i] == data1[k])
			{
				s[i] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
