#include "variadic_functions.h"

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function 
* c: char, i: integer, f: float, s: char *
* 
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int idx;

	va_start(args, format);
	idx = 0;
	while (format[idx] != '\0')
	{
		if (format[idx] != 'c' && format[idx] != 'i' && format[idx] != 'f' && format[idx] != 's')
		{
			continue;
		}
		
	}
	printf("\n");
}
