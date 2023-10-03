#include <stdio.h>
#include "main.h"
/**
 * main -  passed cmd line args
 *
 * @argc: args count
 *
 * @argv: array of arg strgs
 *
 * Return:0
*/

int main(int argc, char *argv[] _attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);

	}

	return (0);
}
