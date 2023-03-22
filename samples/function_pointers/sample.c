#include <stdio.h>
#include <stdlib.h>

/** 
* a normal funtion with an int parameter
* and void return type
**/
void fun()
{
    printf("Value of a is %d\n", a);
}


void main()
{
    // declaring of a function
    void (*fun_ptr)(int) = fun;

    //calling a function pointer
    fun_ptr(10);

    exit(EXIT_SUCCESS);

    //return (0);
}