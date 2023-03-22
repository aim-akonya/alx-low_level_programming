#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: character array representing the name string
* @f: function pointer
* Return: does not return anything
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
