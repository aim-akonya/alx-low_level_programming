#include "variadic_functions.h"
#include <unistd.h>

/**
* _putchar - putchar
* @c: character
* Return: returns 1 on success, 0 otherwise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
