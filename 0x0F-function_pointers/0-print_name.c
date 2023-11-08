#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A function pointer to a printing function.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
