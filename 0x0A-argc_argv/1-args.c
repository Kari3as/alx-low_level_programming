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
	printf("%d\n", argc - 1);

	return (0);
}
