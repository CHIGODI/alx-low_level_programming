#include "function_pointers.h"
/**
 * print_name - printing name
 * @name: name to be printed
 * @f: function parsed as argument to print name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		exit;
	f(name);
}
