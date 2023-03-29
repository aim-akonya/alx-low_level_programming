#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* get_op_func - This function returns a pointer to
* the function that corresponds to the operator given as a parameter
*
* @s: operator passed as argument to the program
* Return: returns a pointer to the
* function that corresponds to the operator given
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	
	i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	
	return (NULL);
}
