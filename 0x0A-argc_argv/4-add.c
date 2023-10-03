#include <stdio.h>
#include <stdlib.h>

/**
 * main -  calc add of 2 nums
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

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' || *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
