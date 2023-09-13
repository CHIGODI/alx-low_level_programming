#include "function_pointers.h"
/**
 * print_name - printing name
 * @name: name to be printed
 * @f: function parsed as an argument to print name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
