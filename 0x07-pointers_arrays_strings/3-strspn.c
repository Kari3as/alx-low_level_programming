#include "main.h"

/**
 * _strspn - count byte of initial str segment
 *
 * @s: pointer to a string
 *
 * @accept: pointer to set of string
 *
 * Retrun: nr of bytes of str seg
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	
	for (; *s != '\0'; s++)
	{
		char *temp_f = accept;

		for (; *temp_f != '\0'; temp_f++)
		{
			if (*s == *temp_f)
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
