#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: returns a int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    for (i = 0; i < size; i++)
    {
        int val;

        val = cmp(array[i]);

        if (val !=  0)
        {
            return (i);
        }

    }
    return (-1);
}
