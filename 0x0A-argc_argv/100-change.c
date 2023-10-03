#include <stdio.h>
#include <stdlib.h>

/**
  * main -  no. of coins
  *
  * @argc: no. of args
  *
  * @argv: array of args str
  *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};

	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			count++;
		}
	}

printf("%d\n", count);
return (0);
}
