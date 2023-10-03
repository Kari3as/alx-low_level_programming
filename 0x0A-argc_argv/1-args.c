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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);

		return (0);

	}
}
