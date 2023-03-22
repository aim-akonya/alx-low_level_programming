#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - a functions that executes a function
* given as a parameter on each element of an array
* @array: array of integer, to be executed by the function
* @size: size of the array
* @action: pointer to a function to be executed
* Return: returns void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
