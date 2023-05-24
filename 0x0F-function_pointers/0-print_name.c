#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: Pointer to the function to use for printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
