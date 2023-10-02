#include <stdio.h>

/**
 * main - with comand line arguments
 *
 * @argc: no. of args
 *
 * @argv: arrays contains comd line args
 *
 * Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);

}
