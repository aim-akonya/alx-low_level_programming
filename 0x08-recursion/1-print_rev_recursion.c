#include "main.h"
#include "string.h"

/**
* print - prints an item
* @s: string buffer
* @index: index of print buffer
*/
void print(char *s)
{
    int i, len, temp;
    len = strlen(s);  

    if (i < len/2){    
        temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
        i++;  
        print(s); 
    }
}


/**
* _print_rev_recursion - prints a string in reverse
* @s: string value
*/
void _print_rev_recursion(char *s)
{
	print(s);
}