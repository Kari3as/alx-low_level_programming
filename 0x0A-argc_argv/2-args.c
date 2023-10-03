#include <stdio.h>

/**
 * main - print all args
 *
 * @argc: no. or args
 *
 * @argv: array of strings args
 *
 * Return: 0
*/

itn main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
