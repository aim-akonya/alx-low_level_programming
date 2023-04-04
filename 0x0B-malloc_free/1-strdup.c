#include "main.h"

/**
* _strdup - return a copy of the input string
* @str: input string
* Return: pointer to the new char array
*
*/
char *_strdup(char *str)
{
    char *str_cp;
    unsigned int str_size;

    if (str == NULL)
    {
        return (NULL);
    }


    /*compute length of string*/
    for (str_size = 0; str[str_size] != '\0'; ++str_size);

    str_cp = (char *) malloc(str_size+1);
    if (str_cp == NULL)
    {
        printf("reached %d\n", str_size);
        return (NULL);
    }

    for (str_size = 0; str[str_size] != '\0'; ++str_size)
    {
        str_cp[str_size] = str[str_size];
    }

    str_cp[str_size] = '\0';

    return str_cp;
}