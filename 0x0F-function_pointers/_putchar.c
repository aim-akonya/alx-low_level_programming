#include <unistd.h>
#include "function_pointers.h"


int _putchar(char c)
{
    write(1, &c, 1);
}