#include "main.h"
#include "string.h"

/**
* print - prints an item
* @s: string buffer
* @index: index of print buffer
*/
void print(char *s, int index)
{
    if (index >= 0)
    {
        if (s[index] == '\0')
        {
           print(s, --index); 
        } else {
            _putchar(s[index]);
            print(s, --index);
        }
    }
}


/**
* _print_rev_recursion - prints a string in reverse
* @s: string value
*/
void _print_rev_recursion(char *s)
{
    int len;

    len = strlen(s);

	print(s, len);

}