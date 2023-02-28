#include "main.h"

/**
* print_line - print a line of size n
* @n: size of the line
*/
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}