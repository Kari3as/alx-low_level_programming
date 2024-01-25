#include "main.h"
#include "function_pointers.h"
/**
 * print_name - function that prints name
 *
 * @name: name of person
 *
 * @f: pointer to a function
 *
 * Return:nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}
