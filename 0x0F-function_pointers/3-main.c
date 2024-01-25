#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on incorrect number of arguments,
 * 99 on invalid operator, 100 if trying to divide or modulo by 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	
	int (*op_func)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	result = op_func(a, b);
	
	printf("%d\n", result);
	
	return (0);
}

