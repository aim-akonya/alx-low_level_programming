#include "main.h"

/**
* print_triangle - print a triagnle
* @size: height og the triangle
*/
void print_triangle(int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        int j;

        

        for (j = 0; j <= i; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    _putchar('\n');
}