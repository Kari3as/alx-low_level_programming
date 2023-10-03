#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  calc mul of 2 nums
 *
 * @argc: no. of args
 *
 * @argv: array of args str
 *
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i;

	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
