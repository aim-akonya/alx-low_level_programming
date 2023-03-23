#include "3-calc.h"
#include <stdlib.h>

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
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 6)
	{
		op_t op = ops[i];

		if (op.op[0] == s)
		{
			return (op.f);
		}
	}

	return (NULL);
}
