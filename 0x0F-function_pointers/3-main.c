#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int agrc, char *argv[])
{
    int val1, val2, result;
    char ops[2];
    int (*op_func)(int, int);

    if (agrc < 4) {
        printf("Error\n");
        exit(98);
    }

    val1 = atoi(argv[1]);
    ops[0]= *argv[2];
    val2 = atoi(argv[3]);

    /*get the function pointer*/
    op_func = get_op_func(ops);
    
    if (!op_func)
    {
        printf("Error\n");
        exit(99);
    }

    /*execute the function pointe;*/
    result = op_func(val1, val2);
    printf("%d\n", result);

    return (0);
}