#include "main.h"

/**
 * _strchr - return pointer to first ocuurance of chr at str
 *
 * @s: string to search through
 *
 * @c: char to find
 *
 * Return: pointer to char
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	retrun(0);
}
