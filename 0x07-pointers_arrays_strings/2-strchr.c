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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
