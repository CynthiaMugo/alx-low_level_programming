#include "function_pointers.h"

/**
 * print_name -> prints a nam
 * @name: input name
 * @f: function pointer
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
