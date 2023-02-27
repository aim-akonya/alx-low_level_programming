#include "main.h"

/**
* _isdigit - checks whether a given character is a digit, 0 -9
* @c: the character to check
* Return:  1, is success
* 0, if error or false
*/
int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    return (0);
}