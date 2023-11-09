#include "function_pointers.h"


/**
 * print_name - Prints the name given
 *
 * @name: The name given
 * @f: the referred function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);

	return ;
}
