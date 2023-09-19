#include "main.h"
/**
 * int _strlen -  usr def func
 *
 * @s - retun leng of str
 *
 * Retun: int
*/

int _strlen(char *s)
{
	int leng = 0;

	while (s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
