#include "main.h"
/**
 * _strlen -returns lengh of a string
 *
 * @s: point to str
 *
 * Return: length
*/

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
